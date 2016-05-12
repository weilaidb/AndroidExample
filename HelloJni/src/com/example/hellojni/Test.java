package com.example.hellojni;

public class Test {
	/* 实例域 */
	private String instanceField = "Instance Field";
	
	/** 静态域 */
	private static String staticField = "Static Field";
	
	/**
	 * p实例方法
	 * @return
	 */
	private String instanceMethod(){
		return "Instance Method!!";
	}
	
	
	/**
	 * 表态方法
	 * @return
	 */
	private static String staticMethod(){
		return "Static Method!!";
	}
	
	public native String test();
	public native String getFiled();
	public native String getMethod();
}
