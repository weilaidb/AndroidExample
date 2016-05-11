package com.example.hellojni;

public class AnotherTest {
	public native String GetWater();
	public native String GetBasicTypes(        boolean bl,
    byte []abc,
    char scon,
    int i32,
    long l64,
    float flnums ,
    double dl);
}
