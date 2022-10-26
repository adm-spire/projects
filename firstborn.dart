import 'package:flutter/material.dart';

void main() {
  runApp(
     MaterialApp(
      home: Scaffold(
        body:Center(
          child: Image(
          image: NetworkImage('https://mezha.media/wp-content/uploads/2022/10/Shahed-136_07.jpg')
        )
        ),
        backgroundColor: Colors.blue.shade100,

        appBar: AppBar(
          title: Text("raunaq's first app"),
          backgroundColor: Colors.purple.shade600
        ),
      ),
  ),
  );
}