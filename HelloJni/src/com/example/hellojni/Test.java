package com.example.hellojni;

public class Test {
	/* ʵ���� */
	private String instanceField = "Instance Field";
	
	/** ��̬�� */
	private static String staticField = "Static Field";
	
	
	
	public native String test();
	public native String getFiled();
}
