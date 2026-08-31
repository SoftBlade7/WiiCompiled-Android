#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F26A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805F26A4;

loc_805F26A4:
{
}

loc_805F26A8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(5))) {
        goto loc_805F26C8;
    }
}

loc_805F26AC:
{
}

loc_805F26B0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(9))) {
        goto loc_805F272C;
    }
}

loc_805F26B4:
{
}

loc_805F26B8:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(6))) {
        goto loc_805F2794;
    }
}

loc_805F26BC:
{
}

loc_805F26C0:
{
    if ((static_cast<int32_t>(r26) == static_cast<int32_t>(10))) {
        goto loc_805F27FC;
    }
}

loc_805F26C4:
{
    goto loc_805F2864;
}

loc_805F26C8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r26 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F26E0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F26F4;
    }
}

loc_805F26E4:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F26F0:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F26F8;
    }
}

loc_805F26F4:
{
    r26 = 1;
}

loc_805F26F8:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r27 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2710:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2724;
    }
}

loc_805F2714:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2720:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2864;
    }
}

loc_805F2724:
{
    r27 = 1;
    goto loc_805F2864;
}

loc_805F272C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F2758;
    }
}

loc_805F2748:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2754:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F275C;
    }
}

loc_805F2758:
{
    r0 = 1;
}

loc_805F275C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r26 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r27 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2778:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F278C;
    }
}

loc_805F277C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2788:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F2864;
    }
}

loc_805F278C:
{
    r27 = 1;
    goto loc_805F2864;
}

loc_805F2794:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r26 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F27AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F27C0;
    }
}

loc_805F27B0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F27BC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805F27C4;
    }
}

loc_805F27C0:
{
    r26 = 1;
}

loc_805F27C4:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F27DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F27F0;
    }
}

loc_805F27E0:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F27EC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F27F4;
    }
}

loc_805F27F0:
{
    r0 = 1;
}

loc_805F27F4:
{
    r27 = (0 - r0);
    goto loc_805F2864;
}

loc_805F27FC:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 16));
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r29 + 28));
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2814:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F2828;
    }
}

loc_805F2818:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 28));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2824:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F282C;
    }
}

loc_805F2828:
{
    r0 = 1;
}

loc_805F282C:
{
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    r26 = (0 - r0);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 32));
    r0 = 0;
    f1.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805F2848:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805F285C;
    }
}

loc_805F284C:
{
    f0.d = MemoryInline::FlatReadFloat32((r28 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2858:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805F2860;
    }
}

loc_805F285C:
{
    r0 = 1;
}

loc_805F2860:
{
    r27 = (0 - r0);
}

loc_805F2864:
{
    f3.d = MemoryInline::FlatReadFloat32((r29 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(0));
}

loc_805F286C:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r29 + 20));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f1.d));
    f0.d = MemoryInline::FlatReadFloat32((r28 + 20));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 20), f2.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2900;
    }
}

loc_805F28A0:
{
}

loc_805F28A4:
{
    if ((static_cast<int32_t>(r27) != static_cast<int32_t>(0))) {
        goto loc_805F2900;
    }
}

loc_805F28A8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f4.d, f0.d);
}

loc_805F28B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F28EC;
    }
}

loc_805F28B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r1 + 40));
    f1.d = MemoryInline::FlatReadFloat32((r1 + 44));
    f0.d = (-(f0.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f1.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d));
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f0.d = PpcFmulsInline(f0.d, f0.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    f3 = ctx->fpr[3];
    f4 = ctx->fpr[4];
    cr = ctx->cr;
    goto loc_805F2930;
}

loc_805F28EC:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword0 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword0;
    r3 = (r3 + -2147483648);
    goto loc_805F2930;
}

loc_805F2900:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805F2904:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805F2910;
    }
}

loc_805F2908:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_805F290C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805F2924;
    }
}

loc_805F2910:
{
    f0.d = PPC_Fctiwz(f4.d);
    fctiwzword1 = PPC_FprLowWordInline(f0.d);
    r3 = fctiwzword1;
    r3 = (r3 + -2147483648);
    goto loc_805F2930;
}

loc_805F2924:
{
    r3 = -1;
}

loc_805F2930:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC00000B gpr_write=0xFC00081B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F26A4 func_805F26A4 preserves=true fpr_mask=0x00000000
