#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8006FED0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8006FED0;

loc_8006FED0:
{
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    r11 = (r1 + 64);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r13 + -27296));
    r27 = r3;
    r28 = r4;
    r29 = r5;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8006FEF8:
{
    r30 = r6;
    r31 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006FF64;
    }
}

loc_8006FF04:
{
    r12 = MemoryInline::FlatRead32(r28);
    r3 = r28;
    r5 = (r1 + 8);
    r4 = 9;
    r12 = MemoryInline::FlatRead32((r12 + 36));
    ctr = r12;
    ctx->lr = 0x8006FF20u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_8006FF28:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8006FF64;
    }
}

loc_8006FF2C:
{
    r3 = r28;
    r5 = (r1 + 16);
    r4 = 1;
    // inline leaf 0x8006DE40 (24 guest instruction(s))
}

loc_inl1_0x8006DE40:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl1_0x8006DE44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_0x8006DE98;
    }
}

loc_inl1_0x8006DE48:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_inl1_0x8006DE4C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_0x8006DE90;
    }
}

loc_inl1_0x8006DE50:
{
    r0 = (r4 * 24);
    r10 = (r3 + r0);
    r3 = 1;
    r9 = MemoryInline::FlatRead32((r10 + 156));
    r8 = MemoryInline::FlatRead32((r10 + 160));
    r7 = MemoryInline::FlatRead32((r10 + 164));
    r6 = MemoryInline::FlatRead32((r10 + 168));
    r4 = MemoryInline::FlatRead32((r10 + 172));
    r0 = MemoryInline::FlatRead32((r10 + 176));
    MemoryInline::FlatWriteRam32(r5, r9);
    MemoryInline::FlatWriteRam32((r5 + 4), r8);
    MemoryInline::FlatWriteRam32((r5 + 8), r7);
    MemoryInline::FlatWriteRam32((r5 + 12), r6);
    MemoryInline::FlatWriteRam32((r5 + 16), r4);
    MemoryInline::FlatWriteRam32((r5 + 20), r0);
    goto loc_inl1_cont_8006DE40;
}

loc_inl1_0x8006DE90:
{
    r3 = 0;
    goto loc_inl1_cont_8006DE40;
}

loc_inl1_0x8006DE98:
{
    r3 = 0;
}

loc_inl1_cont_8006DE40:
{
    // end of inlined leaf 0x8006DE40
    r3 = MemoryInline::FlatRead32((r13 + -27296));
    r4 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80086610u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8006FF4C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8006FF58;
    }
}

loc_8006FF50:
{
    r3 = 2;
    goto loc_8006FFD8;
}

loc_8006FF58:
{
}

loc_8006FF5C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(1))) {
        goto loc_8006FF64;
    }
}

loc_8006FF60:
{
    r31 = 1;
}

loc_8006FF64:
{
}

loc_8006FF68:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_8006FF9C;
    }
}

loc_8006FF6C:
{
    r3 = MemoryInline::FlatRead32((r27 + 16));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8006FF78:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006FF94;
    }
}

loc_8006FF7C:
{
    r4 = MemoryInline::FlatRead32((r27 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r3 = (r3 + 1);
    r4_addr_1 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_1, r28);
    MemoryInline::FlatWrite32((r27 + 16), r3);
    goto loc_8006FF9C;
}

loc_8006FF94:
{
    r3 = r31;
    goto loc_8006FFD8;
}

loc_8006FF9C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8006FFA0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8006FFD4;
    }
}

loc_8006FFA4:
{
    r3 = MemoryInline::FlatRead32((r27 + 20));
    r0 = MemoryInline::FlatRead32((r27 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_8006FFB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8006FFCC;
    }
}

loc_8006FFB4:
{
    r4 = MemoryInline::FlatRead32((r27 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_3 & -4);
    r3 = (r3 + 1);
    r4_addr_3 = (r4 + r0);
    MemoryInline::FlatWrite32(r4_addr_3, r28);
    MemoryInline::FlatWrite32((r27 + 20), r3);
    goto loc_8006FFD4;
}

loc_8006FFCC:
{
    r3 = r31;
    goto loc_8006FFD8;
}

loc_8006FFD4:
{
    r3 = r31;
}

loc_8006FFD8:
{
    r11 = (r1 + 64);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
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
// RECOMP_REGISTRATION base 0x8006FED0 func_8006FED0 preserves=true fpr_mask=0x00000000
