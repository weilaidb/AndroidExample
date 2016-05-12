package com.example.hellojni;

public class Test {
	/* ʵ���� */
	private String instanceField = "Instance Field";
	
	/** ��̬�� */
	private static String staticField = "Static Field";
	
	/**
	 * pʵ������
	 * @return
	 */
	private String instanceMethod(){
		return "Instance Method!!";
	}
	
	
	/**
	 * ��̬����
	 * @return
	 */
	private static String staticMethod(){
		return "Static Method!!";
	}
	
	public native String test();
	public native String getFiled();
	public native String getMethod();
}
