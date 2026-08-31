#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C8C18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;
    uint32_t r4_addr_7 = 0;
    uint32_t r4_mdest_0 = 0;
    uint32_t r4_mrot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r5_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_801C8C18;

loc_801C8C18:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    r11 = (r1 + 48);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r28 = r3;
    r29 = r4;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = 0x80350000u;
    r30 = r3;
    r5_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r5 = (r5_rot_0 & 1020);
    r0 = 2;
    r4 = (r4 + 2352);
    r6 = 0;
    r4_addr_0 = (r4 + r5);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = 0;
    r4 = MemoryInline::FlatRead8((r31 + 2248));
    r4 = (r4 * 96);
    r4 = (r31 + r4);
    r4 = (r4 + 160);
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    ctr = r0;
}

loc_801C8C70:
{
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_2, static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r4_addr_3 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_3, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r4_addr_4 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_4, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r4_addr_5 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_5, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r4_addr_6 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_6, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    r5 = (r4 + r6);
    r4_addr_7 = (r4 + r6);
    MemoryInline::FlatWrite8(r4_addr_7, static_cast<uint8_t>(r3));
    r6 = (r6 + 8);
    MemoryInline::FlatWrite8((r5 + 1), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 2), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 3), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 4), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 5), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 6), static_cast<uint8_t>(r3));
    MemoryInline::FlatWrite8((r5 + 7), static_cast<uint8_t>(r3));
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_801C8C70;
    }
}

loc_801C8D64:
{
    r6 = MemoryInline::FlatRead8((r29 + 2));
    r0 = -4;
    r4 = MemoryInline::FlatRead8((r29 + 1));
    r3 = r28;
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r6), static_cast<uint32_t>(8));
    r4_mrot_0 = (r4_rot_0 & 65280);
    r4_mdest_0 = (r4 & -65281);
    r4 = (r4_mdest_0 | r4_mrot_0);
    r5 = MemoryInline::FlatRead32((r1 + 8));
    r8 = (r4 & 40735);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(0));
}

loc_801C8D80:
{
    r6 = (r29 + 3);
    r4 = (r1 + 8);
    r7 = 10;
    MemoryInline::FlatWrite16(r5, static_cast<uint16_t>(r8));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r5 + 41), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r31 + 2241));
    r5 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite8((r5 + 40), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r29 + 1));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(25));
    r0 = (r0_rot_0 & 1);
    MemoryInline::FlatWrite32((r31 + 2120), r0);
    r5 = MemoryInline::FlatRead8((r31 + 2251));
    ctx->lr = 0x801C8DB8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801C6EDCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r27 = 0x80350000u;
    r4 = (r29 + 13);
    r3 = (r27 + 16504);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = r28;
    r4 = (r29 + 13);
    r5 = 9;
    r6 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[11] = r11;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x801CB0A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r0 = MemoryInline::FlatRead32((r31 + 2112));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C8DE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C8E20;
    }
}

loc_801C8DEC:
{
    r4 = 0x802A0000u;
    r3 = (r27 + 16504);
    r4 = (r4 + -6696);
    r5 = 9;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801C8E04:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C8E20;
    }
}

loc_801C8E08:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead8((r3 + 41));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C8E20;
    }
}

loc_801C8E18:
{
    r0 = -7;
    MemoryInline::FlatWrite8((r3 + 41), static_cast<uint8_t>(r0));
}

loc_801C8E20:
{
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r3 = r30;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    MemoryInline::FlatWrite8((r31 + 2248), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r11 = (r1 + 48);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 52));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFDFFF gpr_write=0xFFFFDFFB gpr_return=0x00000018 fpr_read=0xFF8003FF fpr_write=0xFF8003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x801C8C18 func_801C8C18 preserves=true fpr_mask=0x00000000
