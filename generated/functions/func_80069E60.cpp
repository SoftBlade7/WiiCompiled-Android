#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80069E60(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r28_rot_0 = 0;

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
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80069E60;

loc_80069E60:
{
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 84), r0);
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r12 = MemoryInline::FlatRead32(r6);
    r29 = r3;
    r31 = r5;
    r30 = r4;
    r27 = r6;
    r4 = r29;
    r3 = r31;
    ctr = r12;
    ctx->lr = 0x80069E98u;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r12 = MemoryInline::FlatRead32(r27);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r3 = r30;
    r4 = r31;
    r28_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r28 = (r28_rot_0 & 134217727);
    ctr = r12;
    ctx->lr = 0x80069EB4u;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80069EB8:
{
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r3));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80069ECC;
    }
}

loc_80069EC4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80069EC8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006A0A8;
    }
}

loc_80069ECC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80069ED0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069F48;
    }
}

loc_80069ED4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80069ED8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80069F48;
    }
}

loc_80069EDC:
{
    r6 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r30 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 48), r4);
    r0 = MemoryInline::FlatRead16((r30 + 10));
    MemoryInline::FlatWriteRam32((r1 + 52), r3);
    r5 = MemoryInline::FlatRead16((r1 + 48));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r1 + 50));
    MemoryInline::FlatWriteRam32((r1 + 44), r6);
    r3 = MemoryInline::FlatRead16((r1 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 44));
    r0 = MemoryInline::FlatRead16((r1 + 54));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    goto loc_8006A0A8;
}

loc_80069F48:
{
    r12 = MemoryInline::FlatRead32(r27);
    r3 = r30;
    r4 = r29;
    ctr = r12;
    ctx->lr = 0x80069F5Cu;
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
    ctx->fpr[0] = f0;
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
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_80069F60:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80069FCC;
    }
}

loc_80069F64:
{
    r6 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32(r30);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r30 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r30 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r30 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 36), r4);
    r0 = MemoryInline::FlatRead16((r30 + 10));
    MemoryInline::FlatWriteRam32((r1 + 40), r3);
    r5 = MemoryInline::FlatRead16((r1 + 36));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r1 + 38));
    MemoryInline::FlatWriteRam32((r1 + 32), r6);
    r3 = MemoryInline::FlatRead16((r1 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 32));
    r0 = MemoryInline::FlatRead16((r1 + 42));
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
}

loc_80069FCC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_80069FD0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006A040;
    }
}

loc_80069FD4:
{
    r6 = MemoryInline::FlatRead32(r30);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32(r30, f0.d);
    r4 = MemoryInline::FlatRead32((r30 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16((r30 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r30 + 8));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    MemoryInline::FlatWrite16((r30 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite16((r30 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 24), r4);
    r0 = MemoryInline::FlatRead16((r31 + 10));
    MemoryInline::FlatWriteRam32((r1 + 28), r3);
    r5 = MemoryInline::FlatRead16((r1 + 24));
    MemoryInline::FlatWrite16((r30 + 10), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r1 + 26));
    MemoryInline::FlatWriteRam32((r1 + 20), r6);
    r3 = MemoryInline::FlatRead16((r1 + 28));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 20));
    r0 = MemoryInline::FlatRead16((r1 + 30));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
    goto loc_8006A0A8;
}

loc_8006A040:
{
    r6 = MemoryInline::FlatRead32(r29);
    f0.d = MemoryInline::FlatReadFloat32(r31);
    MemoryInline::FlatWriteFloat32(r29, f0.d);
    r4 = MemoryInline::FlatRead32((r29 + 4));
    r0 = MemoryInline::FlatRead16((r31 + 4));
    MemoryInline::FlatWrite16((r29 + 4), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r31 + 6));
    MemoryInline::FlatWrite16((r29 + 6), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead16((r31 + 8));
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r0));
    MemoryInline::FlatWriteRam32((r1 + 12), r4);
    r0 = MemoryInline::FlatRead16((r31 + 10));
    MemoryInline::FlatWriteRam32((r1 + 16), r3);
    r5 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWrite16((r29 + 10), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead16((r1 + 14));
    MemoryInline::FlatWriteRam32((r1 + 8), r6);
    r3 = MemoryInline::FlatRead16((r1 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r1 + 8));
    r0 = MemoryInline::FlatRead16((r1 + 18));
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    MemoryInline::FlatWrite16((r31 + 4), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r31 + 6), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r31 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r31 + 10), static_cast<uint16_t>(r0));
}

loc_8006A0A8:
{
    r11 = (r1 + 80);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 84));
    ctx->lr = r0;
    r1 = (r1 + 80);
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80069E60 func_80069E60 preserves=true fpr_mask=0x00000000
