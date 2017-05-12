# Reflections

## PID Components

The three components in this project were proportional (Kp), derivative (Kd), and integral (Ki) terms.

Kp - The proportional gain always results in a large response given a change in the error. This can result in an unstable system if the
gain is too high, or a negligable effect if it is too low. Its purpose in this project is to monitor the car's deviation from 
driving steadily along the center of the track.

Kd - The derivative gain helps control the stability of the system, in this case smoothening the car's driving. It is the derivative of
the cross-track-error.

Ki - The integral gain helps settle the steady-state error introduced by the systemic bias. It is the integral sustained measure of error.

The values I chose were Kp = 0.09, Ki = 0.001, and Kd = 0.8

## Choosing Parameters

I began by first setting my Kp to 1, and all of my other parameters to 0. I knew this was going to be ambitious, and sure enough the car
was driving all over the track before crashing fairly quickly. Rather than going with trial by error, I decided to store the CTE for the
first 100 iterations of the car and plot them against the time. For Kp = 1, I saw a lot of oscillation, and as we learned in the 
lessons, we should lower the Kp until we decrease the oscillations enough to wear it looks seemingly steady. I achieved this when
I lowered Kp to 0.09. Below, you can see the results of the graphs from when I had Kp initially at 1, then at 0.09. By the time I
had reached 0.09, the values for the steering angles were at reasonable values.

After this was done, it was time to fine-tune the oscillations in the steering angles. I began fiddling with the Kd value to help
the car counter-steer by letting it notice that the error is being reduced via the derivative of the CTE. Its natural instinct would be to
move towards the x-axis, but by increasing the Kd, I was able to avoid the overshoot we saw in the previous graph. The graph below
shows Kd at 0.85, and Kp and 0.09


Finally, my car was able to drive around the track but as expected, the car was always driving on the right side of the track
due to the systemic bias of the car. Since we have trained our controller to not get to close to the x-axis, the car will 
steer more and more to the right. To compensate, I added a small value for Ki, which represents the sustained measure of error. With this,
the car was able to travel much more stable. Below is a graph of the PID controller with Kd at 0.85, Kp at 0.09, and Ki at 0.001






