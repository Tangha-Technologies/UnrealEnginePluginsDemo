# PrimitiveDrawDemo
plugin link 插件链接:   
[虚幻商场插件 链接](https://www.unrealengine.com/marketplace/zh-CN/product/primitive-draw-line-geometry)  
[LINK for plugin in Unreal Market](https://www.unrealengine.com/marketplace/zh-CN/product/primitive-draw-line-geometry)  
[视频教程 1 链接](https://www.bilibili.com/video/BV1dM411a7Q2/?share_source=copy_web&vd_source=74c5a7ee7e63695eed9e0f75ba7bbc88)  
[video tutorial 1 LINK](https://youtu.be/VzpxfjglunM)  

## 1: add blueprint actor inherited from plugin C++ base class
![image](https://user-images.githubusercontent.com/8192020/211143198-a8a0c58e-a3f4-4cfe-a8dd-ba3bf0b7eab6.png)

APrimitiveDrawGeometryActor is used for drawing Geometry, and 
APrimitiveDrawLineActor is used for drawing Lines, like spline in runtime

### Draw Curve Lines  
create this actor  
![image](https://user-images.githubusercontent.com/8192020/211143377-30d2615f-6850-4612-bb92-9cb1e68cfde6.png)  
and we can change default parameter  
![image](https://user-images.githubusercontent.com/8192020/211143431-658516a6-4fdf-41c7-b134-8d4adcb88c52.png)  
Result:  
![image](https://user-images.githubusercontent.com/8192020/211143531-476481c8-824b-4cde-b9d0-9e60bad6ee0d.png)  
we can change lines during runtime, just find this BP_PrimitiveDrawLineActor Actor in the level:  
![image](https://user-images.githubusercontent.com/8192020/211143661-91916442-7419-4505-8ab5-f09ef14b6d41.png)  
and then change the PointLocations attribute of this actor:  
![image](https://user-images.githubusercontent.com/8192020/211143682-b85de4ba-117b-4ddd-95b0-0ea3f87d9f8f.png)  

### Important, We can add multi lines by adding multi Actors inherited from APrimitiveDrawLineActor  

### Draw Straight Lines  
create this actor  
![image](https://user-images.githubusercontent.com/8192020/211144112-67f1e3d7-52f6-4e1e-a80c-0d3e96f84569.png)  
this actor do not have default parameter, so it will not draw anything when it is placed in the level, we can draw Straight Line by call this function:  
![image](https://user-images.githubusercontent.com/8192020/211144152-813b8048-4b47-4757-a745-d6653f5e9bd2.png)   
we can draw multi lines by call this function multi times, like in testing level blueprint, I drawed 10 lines:  
![image](https://user-images.githubusercontent.com/8192020/211144208-5e5a5ae4-fd65-4b33-9478-e08751cc4689.png)  
Results:  
![image](https://user-images.githubusercontent.com/8192020/211144267-a0f4f68c-5205-4085-aa37-af5d8bd09faf.png)  


### Draw Geometry:  
create this actor  
![image](https://user-images.githubusercontent.com/8192020/211144112-67f1e3d7-52f6-4e1e-a80c-0d3e96f84569.png)  
this actor do not have default parameter, so it will not draw anything when it is placed in the level, we can draw Geometry by call this function:  
![image](https://user-images.githubusercontent.com/8192020/211144315-8218489c-1af1-4153-99cc-a122ebc86126.png)  
this function will draw a Soild Box, here is the Result:  
![image](https://user-images.githubusercontent.com/8192020/211144330-789332f9-04ca-4965-93b6-f8a470f6bcc0.png)  
we can also draw a box by calling this function:  
![image](https://user-images.githubusercontent.com/8192020/211144367-cd122920-5af3-47b3-bac9-b39df114011e.png)  
Results:  
![image](https://user-images.githubusercontent.com/8192020/211144378-10aaa54c-878a-410b-9208-cdf38b18dc1e.png)




