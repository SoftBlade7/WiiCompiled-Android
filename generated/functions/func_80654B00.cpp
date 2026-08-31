#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80654B00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r3_rot_7 = 0;
    uint32_t r3_rot_8 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80654B00;

loc_80654B00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r28 = r3;
    r29 = 0;
    r31 = 1;
    r30 = 0x809C0000u;
}

loc_80654B20:
{
    r3 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = MemoryInline::FlatRead32((r3 + 10524));
    r0 = (r0 * 88);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 89));
}

loc_80654B38:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r0))) {
        goto loc_80654CB4;
    }
}

loc_80654B3C:
{
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead32((r4 + 72));
    r27 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r3));
    r0 = (r27 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654CB4;
    }
}

loc_80654B50:
{
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r0 = MemoryInline::FlatRead8((r3 + 105));
}

loc_80654B5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654C0C;
    }
}

loc_80654B60:
{
    r6 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r7 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r7 + 72));
    r0 = (r27 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654BC4;
    }
}

loc_80654B7C:
{
    r0 = MemoryInline::FlatRead8((r7 + 89));
    r3 = (r29 & 255);
}

loc_80654B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80654B94;
    }
}

loc_80654B8C:
{
    r4 = MemoryInline::FlatRead16((r28 + 16));
    goto loc_80654BC8;
}

loc_80654B94:
{
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r0 = (r0_rot_2 & 8160);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_2 & 1020);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r6 + r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead16((r3 + 12));
    goto loc_80654BC8;
}

loc_80654BC4:
{
    r4 = 0;
}

loc_80654BC8:
{
    r0 = MemoryInline::FlatRead8((r7 + 89));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654BE0;
    }
}

loc_80654BD8:
{
    r3 = MemoryInline::FlatRead16((r28 + 16));
    goto loc_80654BE4;
}

loc_80654BE0:
{
    r3 = 0;
}

loc_80654BE4:
{
    r0 = (r3 + 1);
}

loc_80654BEC:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(r0))) {
        goto loc_80654CB4;
    }
}

loc_80654BF0:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl1_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl1_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl1_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl1_cont_8051BED0;
}

loc_inl1_return:
{
}

loc_inl1_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 9529), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r3 + 2);
    MemoryInline::FlatWrite16((r28 + 16), static_cast<uint16_t>(r0));
    goto loc_80654CF4;
}

loc_80654C0C:
{
    r6 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = MemoryInline::FlatRead32((r6 + 10524));
    r0 = (r0 * 88);
    r7 = (r6 + r0);
    r5 = MemoryInline::FlatRead32((r7 + 72));
    r0 = (r27 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654C70;
    }
}

loc_80654C28:
{
    r0 = MemoryInline::FlatRead8((r7 + 89));
    r3 = (r29 & 255);
}

loc_80654C34:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r0))) {
        goto loc_80654C40;
    }
}

loc_80654C38:
{
    r3 = MemoryInline::FlatRead16((r28 + 16));
    goto loc_80654C74;
}

loc_80654C40:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r0 = (r0_rot_4 & 8160);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & 1020);
    r4 = (r6 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 10144));
    r0 = (r0 * 48);
    r0 = (r6 + r0);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead16((r3 + 12));
    goto loc_80654C74;
}

loc_80654C70:
{
    r3 = 0;
}

loc_80654C74:
{
    r0 = MemoryInline::FlatRead8((r7 + 89));
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r0 = (r0 & r5);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80654C8C;
    }
}

loc_80654C84:
{
    r0 = MemoryInline::FlatRead16((r28 + 16));
    goto loc_80654C90;
}

loc_80654C8C:
{
    r0 = 0;
}

loc_80654C90:
{
}

loc_80654C94:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(r0))) {
        goto loc_80654CB4;
    }
}

loc_80654C98:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl2_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_inl2_0x8051BEEC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_inl2_0x8051BEF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl2_cont_8051BED0;
}

loc_inl2_return:
{
}

loc_inl2_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 9529), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r28 + 16), static_cast<uint16_t>(r0));
    goto loc_80654CF4;
}

loc_80654CB4:
{
    r29 = (r29 + 1);
}

loc_80654CBC:
{
    if ((static_cast<uint32_t>(r29) < static_cast<uint32_t>(12))) {
        goto loc_80654B20;
    }
}

loc_80654CC0:
{
    // inline leaf 0x8051BED0 (12 guest instruction(s))
}

loc_inl3_0x8051BED0:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = MemoryInline::FlatRead32((r4 + 24520));
    r4 = MemoryInline::FlatRead32((r4 + 84));
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead32((r4 + 40));
}

loc_inl3_0x8051BEEC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF0:
{
}

loc_inl3_0x8051BEF4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(5))) {
        goto loc_inl3_return;
    }
}

loc_inl3_0x8051BEF8:
{
    r3 = r4;
    goto loc_inl3_cont_8051BED0;
}

loc_inl3_return:
{
}

loc_inl3_cont_8051BED0:
{
    // end of inlined leaf 0x8051BED0
    r0 = MemoryInline::FlatRead8((r3 + 9528));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80654CCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80654CF4;
    }
}

loc_80654CD0:
{
    // inline leaf 0x80008E84 (3 guest instruction(s))
    r3 = 0x802A0000u;
    r3 = (r3 + 16512);
    // end of inlined leaf 0x80008E84
    r4 = MemoryInline::FlatRead8((r3 + 105));
    r0 = MemoryInline::FlatRead16((r28 + 16));
    r3 = (0 - r4);
    r3 = (r3 | r4);
    r3_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_7 & 1);
    r3 = (r3 + 1);
    r0 = (r0 + r3);
    MemoryInline::FlatWrite16((r28 + 16), static_cast<uint16_t>(r0));
}

loc_80654CF4:
{
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80000FB gpr_write=0xF80000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80654B00 func_80654B00 preserves=true fpr_mask=0x00000000
