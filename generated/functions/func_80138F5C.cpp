#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80138F5C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80138F5C;

loc_80138F5C:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r4 = 0x80330000u;
    r27 = r3;
    r4 = (r4 + 25208);
    r30 = 0;
    r29 = (r4 + 52);
}

loc_80138F84:
{
    r0 = MemoryInline::FlatRead8((r29 + 281));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80138F8C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138FAC;
    }
}

loc_80138F90:
{
    r4 = r27;
    r3 = (r29 + 8);
    r5 = 6;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80138FA4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80138FAC;
    }
}

loc_80138FA8:
{
    goto loc_80138FC0;
}

loc_80138FAC:
{
    r30 = (r30 + 1);
    r29 = (r29 + 284);
}

loc_80138FB8:
{
    if ((static_cast<uint32_t>(r30) < static_cast<uint32_t>(4))) {
        goto loc_80138F84;
    }
}

loc_80138FBC:
{
    r29 = 0;
}

loc_80138FC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_80138FC4:
{
    r28 = 0;
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80138FD8;
    }
}

loc_80138FD0:
{
    r28 = MemoryInline::FlatRead16((r29 + 2));
    goto loc_80138FFC;
}

loc_80138FD8:
{
    r30 = 0x80330000u;
    r4 = r27;
    r30 = (r30 + 25208);
    r5 = 6;
    r3 = (r30 + 1584);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80138FF4:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80138FFC;
    }
}

loc_80138FF8:
{
    r28 = MemoryInline::FlatRead16((r30 + 1620));
}

loc_80138FFC:
{
}

loc_80139000:
{
    if ((static_cast<int32_t>(r28) == static_cast<int32_t>(0))) {
        goto loc_801390C0;
    }
}

loc_80139004:
{
    r0 = (r28 & 8192);
}

loc_80139008:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139014;
    }
}

loc_8013900C:
{
    r31 = 1021;
    goto loc_801390C0;
}

loc_80139014:
{
    r0 = (r28 & 4096);
}

loc_80139018:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139024;
    }
}

loc_8013901C:
{
    r31 = 679;
    goto loc_801390C0;
}

loc_80139024:
{
    r0 = (r28 & 512);
}

loc_80139028:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139034;
    }
}

loc_8013902C:
{
    r31 = 552;
    goto loc_801390C0;
}

loc_80139034:
{
    r0 = (r28 & 32768);
}

loc_80139038:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139044;
    }
}

loc_8013903C:
{
    r31 = 339;
    goto loc_801390C0;
}

loc_80139044:
{
    r0 = (r28 & 256);
}

loc_80139048:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139054;
    }
}

loc_8013904C:
{
    r31 = 367;
    goto loc_801390C0;
}

loc_80139054:
{
    r0 = (r28 & 16384);
}

loc_80139058:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139064;
    }
}

loc_8013905C:
{
    r31 = 224;
    goto loc_801390C0;
}

loc_80139064:
{
    r0 = (r28 & 2048);
}

loc_80139068:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139074;
    }
}

loc_8013906C:
{
    r31 = 183;
    goto loc_801390C0;
}

loc_80139074:
{
    r0 = (r28 & 1024);
}

loc_80139078:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80139084;
    }
}

loc_8013907C:
{
    r31 = 121;
    goto loc_801390C0;
}

loc_80139084:
{
    r0 = (r28 & 4);
}

loc_80139088:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80139094;
    }
}

loc_8013908C:
{
    r31 = 83;
    goto loc_801390C0;
}

loc_80139094:
{
    r0 = (r28 & 2);
}

loc_80139098:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801390A4;
    }
}

loc_8013909C:
{
    r31 = 54;
    goto loc_801390C0;
}

loc_801390A4:
{
    r0 = (r28 & 16);
}

loc_801390A8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801390B4;
    }
}

loc_801390AC:
{
    r31 = 27;
    goto loc_801390C0;
}

loc_801390B4:
{
    r0 = (r28 & 8);
}

loc_801390B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801390C0;
    }
}

loc_801390BC:
{
    r31 = 17;
}

loc_801390C0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(1021));
}

loc_801390C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801390E0;
    }
}

loc_801390C8:
{
    r3 = 0x80330000u;
    r3 = (r3 + 23888);
    r0 = MemoryInline::FlatRead16((r3 + 124));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1017));
}

loc_801390D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801390E0;
    }
}

loc_801390DC:
{
    r31 = 1017;
}

loc_801390E0:
{
    r11 = (r1 + 32);
    r3 = r31;
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80008FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80138F5C func_80138F5C preserves=true fpr_mask=0x00000000
