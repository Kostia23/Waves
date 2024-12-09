# Waves

To easily open the project in Qt Creator Click -> Open Project and then choose the Wavesv_2.pro.
If you did as i said, the full project would open immediately.

Also i recommend test it before displaying the project. If it has issue with version just create a raw project and copy the code from cpp and h files. And fill the source,headers in the file .pro as in this one.

QUESTIONS
1. How does your application fit the project theme? - The application visually represents the theme of "waves" by dynamically drawing sinusoidal wave patterns, which are a fundamental representation of many types of waves, such as sound waves, light waves, and water waves. The interactive sliders allow users to adjust the frequency and amplitude of the wave, providing a visual and intuitive connection to the theme.
2. At a high level, what is your application? - The application is a wave visualizer built with Qt. It uses a custom drawing widget to render sinusoidal wave patterns in real-time. Users can control the appearance of the wave through sliders that adjust its frequency and amplitude. This application serves as a basic demonstration of wave behavior and interaction.
3. How did you design your application? - Architecture: The class MainWindow serves as the main container for the user interface. It includes components like sliders, labels and so on.
The custom class DrawingWidget serves as an area of drawing the sinusoid. Interaction: Slider that user can use for changing the value of frequency or amplitude that directly influence the sinusoid.
Design: The class QGradient provides possibility to draw the backgrount color to gradient and QPen to draw a dash line that helps to keep the center of drawing area.
4. Flowchart your application Start -> Initialize Application: creating mainwindow that contains all of compenents and initializing other components -> Displaying the whole application -> User interaction: userAdjust sliders → Emit signals to WaveWidget. WaveWidget updates frequency/amplitude -> Render sinusoid -> End
5. Explain particularly challenging pieces of your application - Updating the wave in real-time while ensuring smooth rendering was challenging. It required a good understanding of the paintEvent lifecycle and efficient use of QPainter
6. Summary of your learning takeaways -> Custom Drawing in Qt: Learned how to implement custom widgets with QWidget and override paintEvent for rendering dynamic visuals. Mathematical Visualization: Understood how mathematical functions (like sine) can be translated into graphical representations. UI Design in Qt: Practiced creating a structured GUI with sliders and dynamically updating widgets.
   
