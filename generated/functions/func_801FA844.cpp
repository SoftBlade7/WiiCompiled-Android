#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801FA844(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint32_t r6_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801FA844;

loc_801FA844:
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
    r0 = MemoryInline::FlatRead32((r3 + 28));
    r27 = r3;
    r28 = r4;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801FA868:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA898;
    }
}

loc_801FA86C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FA87C;
    }
}

loc_801FA870:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FA874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FA888;
    }
}

loc_801FA878:
{
    goto loc_801FA8A8;
}

loc_801FA87C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_801FA880:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801FA8A8;
    }
}

loc_801FA884:
{
    goto loc_801FA8A0;
}

loc_801FA888:
{
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(31));
    r0 = (r0_rot_0 & 2147483647);
    r0 = (r5 + r0);
    r6 = (r0 & 65535);
    goto loc_801FA8B0;
}

loc_801FA898:
{
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(1));
    r6 = (r6_rot_2 & -2);
    goto loc_801FA8B0;
}

loc_801FA8A0:
{
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(2));
    r6 = (r6_rot_1 & -4);
    goto loc_801FA8B0;
}

loc_801FA8A8:
{
    r3 = 15;
    goto loc_801FA95C;
}

loc_801FA8B0:
{
    r5 = MemoryInline::FlatRead16((r3 + 24));
    r30 = 1;
    r4 = MemoryInline::FlatRead8((r3 + 32));
    r0 = (r5 & 128);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801FA8C0:
{
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r0 = PPC_Srw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r0 = (r3 + r0);
    r29 = (r0 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA8D8;
    }
}

loc_801FA8D4:
{
    r30 = (r5 & 7);
}

loc_801FA8D8:
{
    r3 = r27;
    r4 = r29;
    r5 = r28;
    ctx->lr = 0x801FA8E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801F5D4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801FA8EC:
{
    r31 = r3;
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(4096))) {
        goto loc_801FA940;
    }
}

loc_801FA8F4:
{
    r12 = MemoryInline::FlatRead32((r27 + 6264));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_801FA8FC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA940;
    }
}

loc_801FA900:
{
    r3 = MemoryInline::FlatRead32((r27 + 6232));
    ctr = r12;
    ctx->lr = 0x801FA90Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_801FA910:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_801FA950;
    }
}

loc_801FA914:
{
}

loc_801FA918:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_801FA940;
    }
}

loc_801FA91C:
{
    r0 = MemoryInline::FlatRead8((r27 + 34));
}

loc_801FA924:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(2))) {
        goto loc_801FA940;
    }
}

loc_801FA928:
{
}

loc_801FA92C:
{
    if ((static_cast<uint32_t>(r30) >= static_cast<uint32_t>(r0))) {
        goto loc_801FA940;
    }
}

loc_801FA930:
{
    r0 = MemoryInline::FlatRead32((r27 + 12));
    r30 = (r30 + 1);
    r29 = (r29 + r0);
    goto loc_801FA950;
}

loc_801FA940:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FA944:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801FA950;
    }
}

loc_801FA948:
{
    r3 = r31;
    goto loc_801FA95C;
}

loc_801FA950:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_801FA954:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801FA8D8;
    }
}

loc_801FA958:
{
    r3 = r31;
}

loc_801FA95C:
{
    r11 = (r1 + 32);
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
    ctx->gpr[6] = r6;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801FA844 func_801FA844 preserves=true fpr_mask=0x00000000
