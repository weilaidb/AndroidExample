package com.example.hellojni;

public class Test {
	/*  µ¿˝”Ú */
	private String instanceField = "Instance Field";
	
	/** æ≤Ã¨”Ú */
	private static String staticField = "Static Field";
	
	
	
	public native String test();
	public native String getFiled();
}
