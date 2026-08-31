#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F670(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r30_addr_0 = 0;
    uint32_t r30_addr_1 = 0;
    uint32_t r30_addr_2 = 0;
    uint32_t r30_addr_3 = 0;
    uint32_t r30_addr_4 = 0;
    uint32_t r30_addr_5 = 0;
    uint32_t r30_addr_6 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r5_rot_4 = 0;
    uint32_t r5_rot_5 = 0;
    uint32_t r5_rot_6 = 0;
    uint32_t r5_rot_7 = 0;
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
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8012F670;

loc_8012F670:
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
    r7 = 0x80310000u;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(65523));
}

loc_8012F68C:
{
    r7 = (r7 + -26176);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = (r7 + 84);
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8012F6AC;
    }
}

loc_8012F6A4:
{
    r3 = 255;
    goto loc_8012F9A0;
}

loc_8012F6AC:
{
    r0 = 3;
    r31 = 0;
    ctr = r0;
}

loc_8012F6B8:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_2 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_2 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_2);
}

loc_8012F6CC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F710;
    }
}

loc_8012F6D0:
{
    r31 = (r31 + 1);
    r5_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_3 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_3 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_3);
}

loc_8012F6E8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F710;
    }
}

loc_8012F6EC:
{
    r31 = (r31 + 1);
    r5_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(2));
    r5 = (r5_rot_4 & 1020);
    r5 = (r5 + 196608);
    r0 = (r5 + -30180);
    r30_addr_4 = (r30 + r0);
    r0 = MemoryInline::FlatRead32(r30_addr_4);
}

loc_8012F704:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F710;
    }
}

loc_8012F708:
{
    r31 = (r31 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012F6B8;
    }
}

loc_8012F710:
{
    r0 = (r31 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(9));
}

loc_8012F718:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012F724;
    }
}

loc_8012F71C:
{
    r3 = 255;
    goto loc_8012F9A0;
}

loc_8012F724:
{
    r0 = (r3 + 3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8012F72C:
{
    r3 = (r0 & -4);
    r0 = (r3 + 12);
    r3 = (r0 * r4);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012F744;
    }
}

loc_8012F73C:
{
    ctx->lr = 0x8012F740u;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801302D0u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r6 = r3;
}

loc_8012F744:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8012F748:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F99C;
    }
}

loc_8012F74C:
{
    r4 = r27;
    r5 = r28;
    r3 = (r31 & 255);
    ctx->lr = 0x8012F75Cu;
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
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8012E6D4u>(ctx);
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
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r3 = 0x80310000u;
    r5_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r31), static_cast<uint32_t>(4));
    r5 = (r5_rot_6 & 4080);
    r3 = (r3 + -26176);
    r4 = 0;
    r3 = (r3 + 84);
    r6 = (r5 + 196608);
    r5 = (r3 + 196608);
    r5 = MemoryInline::FlatRead8((r5 + -30073));
    r0 = (r6 + -30316);
    r3_addr_1 = (r3 + r0);
    r7 = MemoryInline::FlatRead16(r3_addr_1);
    ctr = r5;
}

loc_8012F78C:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(0))) {
        goto loc_8012F7BC;
    }
}

loc_8012F790:
{
    r6 = (r4 + 196608);
    r0 = (r6 + -30082);
    r3_addr_3 = (r3 + r0);
    r0 = MemoryInline::FlatRead8(r3_addr_3);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r6 = (r6_rot_2 & -16);
    r6 = (r6 + 196608);
    r0 = (r6 + -30316);
    r3_addr_4 = (r3 + r0);
    r0 = MemoryInline::FlatRead16(r3_addr_4);
}

loc_8012F7B0:
{
    if ((static_cast<uint32_t>(r7) <= static_cast<uint32_t>(r0))) {
        goto loc_8012F7BC;
    }
}

loc_8012F7B4:
{
    r4 = (r4 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012F790;
    }
}

loc_8012F7BC:
{
}

loc_8012F7C0:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_8012F924;
    }
}

loc_8012F7C4:
{
    r0 = (r5 - r4);
    r8 = (r4 + 8);
}

loc_8012F7D0:
{
    if ((static_cast<int32_t>(r0) <= static_cast<int32_t>(8))) {
        goto loc_8012F8FC;
    }
}

loc_8012F7D4:
{
    r6 = (r3 + 196608);
    r9 = 0;
    r0 = MemoryInline::FlatRead8((r6 + -30073));
    r10 = 0;
    r11 = 0;
    r7 = 0;
}

loc_8012F7F0:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(r4))) {
        goto loc_8012F808;
    }
}

loc_8012F7F4:
{
    r6 = 0x80000000u;
    r0 = (r6 + 1);
}

loc_8012F800:
{
    if ((static_cast<int32_t>(r4) < static_cast<int32_t>(r0))) {
        goto loc_8012F808;
    }
}

loc_8012F804:
{
    r7 = 1;
}

loc_8012F808:
{
}

loc_8012F80C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8012F82C;
    }
}

loc_8012F810:
{
    r7 = (r3 + 196608);
    r6 = 0x80000000u;
    r7 = MemoryInline::FlatRead8((r7 + -30073));
    r0 = (r6 + 1);
}

loc_8012F824:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_8012F82C;
    }
}

loc_8012F828:
{
    r11 = 1;
}

loc_8012F82C:
{
}

loc_8012F830:
{
    if ((static_cast<int32_t>(r11) == static_cast<int32_t>(0))) {
        goto loc_8012F844;
    }
}

loc_8012F834:
{
    r0 = (r4 + -2147483648);
}

loc_8012F83C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8012F844;
    }
}

loc_8012F840:
{
    r10 = 1;
}

loc_8012F844:
{
}

loc_8012F848:
{
    if ((static_cast<int32_t>(r10) == static_cast<int32_t>(0))) {
        goto loc_8012F88C;
    }
}

loc_8012F84C:
{
    r6 = (r3 + 196608);
    r0 = (0 - r4);
    r10 = MemoryInline::FlatRead8((r6 + -30073));
    r0 = (r0 & -2147483648);
    r6 = 1;
    r7 = (r10 & -2147483648);
}

loc_8012F868:
{
    if ((static_cast<int32_t>(r7) != static_cast<int32_t>(r0))) {
        goto loc_8012F880;
    }
}

loc_8012F86C:
{
    r0 = (r10 - r4);
    r0 = (r0 & -2147483648);
}

loc_8012F878:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(r0))) {
        goto loc_8012F880;
    }
}

loc_8012F87C:
{
    r6 = 0;
}

loc_8012F880:
{
}

loc_8012F884:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8012F88C;
    }
}

loc_8012F888:
{
    r9 = 1;
}

loc_8012F88C:
{
}

loc_8012F890:
{
    if ((static_cast<int32_t>(r9) == static_cast<int32_t>(0))) {
        goto loc_8012F8FC;
    }
}

loc_8012F894:
{
    r0 = (r5 + 7);
    r0 = (r0 - r8);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8012F8A8:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r8))) {
        goto loc_8012F8FC;
    }
}

loc_8012F8AC:
{
    r6 = (r3 + r5);
    r5 = (r5 + -8);
    r6 = (r6 + 196608);
    r0 = MemoryInline::FlatRead8((r6 + -30083));
    MemoryInline::FlatWrite8((r6 + -30082), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30084));
    MemoryInline::FlatWrite8((r6 + -30083), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30085));
    MemoryInline::FlatWrite8((r6 + -30084), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30086));
    MemoryInline::FlatWrite8((r6 + -30085), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30087));
    MemoryInline::FlatWrite8((r6 + -30086), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30088));
    MemoryInline::FlatWrite8((r6 + -30087), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30089));
    MemoryInline::FlatWrite8((r6 + -30088), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r6 + -30090));
    MemoryInline::FlatWrite8((r6 + -30089), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012F8AC;
    }
}

loc_8012F8FC:
{
    r0 = (r5 - r4);
    ctr = r0;
}

loc_8012F908:
{
    if ((static_cast<int32_t>(r5) <= static_cast<int32_t>(r4))) {
        goto loc_8012F924;
    }
}

loc_8012F90C:
{
    r6 = (r3 + r5);
    r5 = (r5 + -1);
    r6 = (r6 + 196608);
    r0 = MemoryInline::FlatRead8((r6 + -30083));
    MemoryInline::FlatWrite8((r6 + -30082), static_cast<uint8_t>(r0));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8012F90C;
    }
}

loc_8012F924:
{
    r0 = (r3 + 196608);
    r5 = (r31 & 255);
    r4 = (r0 + r4);
    r3 = 0x80310000u;
    r3 = (r3 + -26176);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(9));
}

loc_8012F93C:
{
    MemoryInline::FlatWrite8((r4 + -30082), static_cast<uint8_t>(r31));
    r3 = (r3 + 84);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8012F984;
    }
}

loc_8012F948:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(1));
}

loc_8012F94C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8012F96C;
    }
}

loc_8012F950:
{
    r4 = (r3 + 196608);
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r4 + -30084));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 | r0);
    MemoryInline::FlatWriteRam16((r4 + -30084), static_cast<uint16_t>(r0));
    goto loc_8012F984;
}

loc_8012F96C:
{
    r4 = (r3 + 196608);
    r0 = 1;
    r3 = MemoryInline::FlatRead16((r4 + -30084));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r5));
    r0 = (r3 & ~r0);
    MemoryInline::FlatWriteRam16((r4 + -30084), static_cast<uint16_t>(r0));
}

loc_8012F984:
{
    r5 = (r30 + 196608);
    r3 = r31;
    r4 = MemoryInline::FlatRead8((r5 + -30073));
    r0 = (r4 + 1);
    MemoryInline::FlatWriteRam8((r5 + -30073), static_cast<uint8_t>(r0));
    goto loc_8012F9A0;
}

loc_8012F99C:
{
    r3 = 255;
}

loc_8012F9A0:
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
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
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
// RECOMP_REGISTRATION base 0x8012F670 func_8012F670 preserves=true fpr_mask=0x00000000
