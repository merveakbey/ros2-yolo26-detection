# ROS2 YOLO26 Detection

Bu proje, **ROS 2 Humble** ortamında çalışan, **Ultralytics YOLO26** tabanlı bir nesne tespit sistemidir. Sistem, video kaynağından aldığı görüntüler üzerinde nesne tespiti yapar ve sonuçları ROS 2 mesajları olarak yayınlar.

Proje, özellikle ROS 2 üzerinde özel mesaj tipleri kullanarak tespit sonuçlarını standart ve yeniden kullanılabilir bir yapıda paylaşmak amacıyla geliştirilmiştir.

---

## Proje Amacı

Bu projenin amacı:

- YOLO26 modeli ile gerçek zamanlı nesne tespiti yapmak
- Tespit edilen nesneleri ROS 2 topic’leri üzerinden yayınlamak
- Özel mesaj tipleri (`msg`) kullanarak tespit sonuçlarını yapılandırılmış şekilde aktarmak
- ROS 2 tabanlı diğer sistemlerle kolay entegrasyon sağlamak
- Python tabanlı modüler ve geliştirilebilir bir algılama düğümü oluşturmak

---

## Proje Yapısı

Proje iki temel ROS 2 paketinden oluşmaktadır:

### 1. `yolo26_interfaces`

Bu paket, nesne tespit sonuçlarını taşımak için kullanılan özel ROS 2 mesajlarını içerir.

İçerdiği mesajlar:

- `YoloDetection.msg`
- `YoloDetectionArray.msg`

### 2. `yolo26_publisher_py`

Bu paket, YOLO26 modeli ile çıkarım yapan ve sonuçları ROS 2 topic’i üzerinden yayınlayan Python tabanlı node’u içerir.

---

## Mesaj Yapısı

### `YoloDetection.msg`

Tek bir tespiti temsil eder.

Alanlar:

- `int32 class_id`
- `string class_name`
- `float32 confidence`
- `float32 xmin`
- `float32 ymin`
- `float32 xmax`
- `float32 ymax`
- `int32 track_id`

### `YoloDetectionArray.msg`

Bir kare içerisindeki tüm tespitleri temsil eder.

Alanlar:

- `std_msgs/Header header`
- `uint32 image_width`
- `uint32 image_height`
- `YoloDetection[] detections`

Bu yapı sayesinde her kare için tüm nesne tespitleri tek bir mesaj altında yayınlanabilir.

---

## Kullanılan Teknolojiler

Projede kullanılan temel teknolojiler şunlardır:

- **ROS 2 Humble**
- **Python 3**
- **Ultralytics YOLO**
- **OpenCV**
- **colcon build**
- **ament_python**
- **CMake**

---

## Gereksinimler

Projeyi çalıştırmadan önce aşağıdaki bileşenlerin sistemde kurulu olması gerekir:

- Ubuntu
- ROS 2 Humble
- Python 3
- `colcon`
- `opencv-python`
- `ultralytics`

Ek olarak ROS 2 ortamının doğru şekilde source edilmesi gerekir.

---

## Kurulum

### 1. Çalışma alanını oluştur

```bash
mkdir -p ~/ros2_ws/src
cd ~/ros2_ws/src
```
2. Depoyu klonla
```bash
git clone https://github.com/merveakbey/ros2-yolo26-detection.git
```
3. Workspace kök dizinine dön
```bash
cd ~/ros2_ws
```
4. Bağımlılıkları yükle
```bash
pip install ultralytics opencv-python
```
5. Paketi derle
```bash
colcon build
```
veya belirli paketleri derlemek için:
```bash
colcon build --packages-select yolo26_interfaces yolo26_publisher_py
```
6. Ortamı source et
```bash
source /opt/ros/humble/setup.bash
source ~/ros2_ws/install/setup.bash
```
## Çalıştırma

Node’u çalıştırmak için:
```bash
ros2 run yolo26_publisher_py yolo_detector
```
## Parametrelerle çalıştırmak için:

ros2 run yolo26_publisher_py yolo_detector --ros-args \
  -p model_path:=/home/merve/yolo26nvisdroneboat.pt \
  -p video_source:=/home/merve/ros2_ws/License\ Plate\ Detection\ Test.mp4 \
  -p conf_threshold:=0.25 \
  -p frame_id:=camera \
  -p topic_name:=/yolo26/detections
  
## Parametreler

Node aşağıdaki parametreleri destekler:

- model_path
- Kullanılacak YOLO model dosyasının yolu
- video_source
- Giriş videosu veya kamera kaynağı
- conf_threshold
- Minimum güven skoru eşiği
- frame_id
- ROS mesaj başlığında kullanılacak frame adı
- topic_name
- Tespit sonuçlarının yayınlanacağı topic adı
- Yayınlanan Topic

Node aşağıdaki topic üzerinden yayın yapar:
```bash
/yolo26/detections
```
Mesaj tipi:
```bash
yolo26_interfaces/msg/YoloDetectionArray
```
Topic’i görüntülemek için:
```bash
ros2 topic echo /yolo26/detections
```

## Örnek Kullanım Senaryosu

Sistem çalıştığında şu adımlar gerçekleşir:

- Video veya kamera kaynağından kare alınır
- YOLO26 modeli ile nesne tespiti yapılır
- Her nesne için sınıf adı, güven skoru ve bounding box bilgisi çıkarılır
- Sonuçlar YoloDetection nesnelerine dönüştürülür
- Tüm tespitler YoloDetectionArray mesajı ile publish edilir

Bu yapı sayesinde başka ROS 2 düğümleri bu topic’i dinleyerek:

- alarm sistemi kurabilir
- nesne takibi yapabilir
- robot kontrol kararları alabilir
- kayıt ve loglama işlemleri gerçekleştirebilir
  
## Projenin Güçlü Yönleri
- Modüler ROS 2 paket yapısı
- Özel mesaj tipleri ile temiz veri aktarımı
- Farklı model ve video kaynaklarına uyarlanabilirlik
- Python tabanlı geliştirilebilir node mimarisi
- Gerçek zamanlı algılama projelerine uygun temel altyapı

## Hedef Kullanım Alanları

Bu proje aşağıdaki alanlarda temel altyapı olarak kullanılabilir:

- Mobil robotlar
- Akıllı kamera sistemleri
- Gerçek zamanlı güvenlik uygulamaları
- Endüstriyel görsel denetim
- Otonom sistemler
- ROS 2 tabanlı yapay zeka uygulamaları

## Geliştirici

**Merve Akbey**
