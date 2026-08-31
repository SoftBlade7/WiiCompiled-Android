#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015E2BC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_10 = 0;
    uint32_t r3_addr_11 = 0;
    uint32_t r3_addr_12 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;
    uint32_t r3_addr_5 = 0;
    uint32_t r3_addr_6 = 0;
    uint32_t r3_addr_7 = 0;
    uint32_t r3_addr_8 = 0;
    uint32_t r3_addr_9 = 0;
    uint32_t r5_addr_0 = 0;
    uint32_t r5_addr_1 = 0;
    uint32_t r5_addr_2 = 0;
    uint32_t r5_addr_3 = 0;
    uint32_t r5_addr_4 = 0;
    uint32_t r5_addr_5 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r6_addr_7 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;
    uint32_t r8_addr_7 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8015E2BC;

loc_8015E2BC:
{
    MemoryInline::FlatWriteRam32((r1 + -160), r1);
    r1 = (r1 + -160);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 164), r0);
    r11 = (r1 + 160);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r28 = r3;
    r27 = r4;
    ctx->lr = 0x8015E2DCu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8015DF4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8015E2E0:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(0))) {
        goto loc_8015E500;
    }
}

loc_8015E2E4:
{
    r29 = MemoryInline::FlatRead32((r13 + -26072));
}

loc_8015E2EC:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_8015E2F8;
    }
}

loc_8015E2F0:
{
    r4 = 0;
    goto loc_8015E484;
}

loc_8015E2F8:
{
    r8 = MemoryInline::FlatRead32((r13 + -26048));
    r0 = (r29 * 12);
    r7 = MemoryInline::FlatRead32((r13 + -26052));
    r6 = (r8 + 4);
    r6_addr_1 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_1);
    r8_addr_1 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_1);
}

loc_8015E314:
{
    r0 = (r0 & 16777215);
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015E328;
    }
}

loc_8015E320:
{
    r4 = 0;
    goto loc_8015E428;
}

loc_8015E328:
{
    r0 = (r3 * 12);
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015E338:
{
    r0 = (r0 & 16777215);
    r31 = (r7 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E34C;
    }
}

loc_8015E344:
{
    r4 = 0;
    goto loc_8015E3CC;
}

loc_8015E34C:
{
    r3 = (r3 * 12);
    r4 = (r1 + 8);
    r5 = 128;
    r8_addr_3 = (r8 + r3);
    r0 = MemoryInline::FlatRead32(r8_addr_3);
    r6_addr_3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32(r6_addr_3);
    r0 = (r0 & 16777215);
    r27 = (r7 + r0);
    ctx->lr = 0x8015E36Cu;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x8015E58Cu>(ctx);
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
}

loc_8015E370:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(128))) {
        goto loc_8015E37C;
    }
}

loc_8015E378:
{
    goto loc_8015E3CC;
}

loc_8015E37C:
{
    r4 = (r3 + 1);
    r5 = (r1 + 8);
    r0 = 47;
    r5_addr_1 = (r5 + r3);
    MemoryInline::FlatWrite8(r5_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3 = r6;
    r5 = (r5 + r4);
    goto loc_8015E3B0;
}

loc_8015E39C:
{
    r0 = MemoryInline::FlatRead8(r27);
    r3 = (r3 + -1);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r5, static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
}

loc_8015E3B0:
{
}

loc_8015E3B4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8015E3C4;
    }
}

loc_8015E3B8:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E39C;
    }
}

loc_8015E3C4:
{
    r0 = (r6 - r3);
    r4 = (r4 + r0);
}

loc_8015E3CC:
{
}

loc_8015E3D0:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8015E3D8;
    }
}

loc_8015E3D4:
{
    goto loc_8015E428;
}

loc_8015E3D8:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_1 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_1, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = r6;
    r3 = (r3 + r5);
    goto loc_8015E40C;
}

loc_8015E3F8:
{
    r0 = MemoryInline::FlatRead8(r31);
    r4 = (r4 + -1);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8015E40C:
{
}

loc_8015E410:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8015E420;
    }
}

loc_8015E414:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E3F8;
    }
}

loc_8015E420:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_8015E428:
{
}

loc_8015E42C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(128))) {
        goto loc_8015E434;
    }
}

loc_8015E430:
{
    goto loc_8015E484;
}

loc_8015E434:
{
    r5 = (r4 + 1);
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_3 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_3, static_cast<uint8_t>(r0));
    r6 = (128 - r5);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(128) >= static_cast<uint32_t>(r5) ? 1u : 0u) << 29);
    r4 = r6;
    r3 = (r3 + r5);
    goto loc_8015E468;
}

loc_8015E454:
{
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (r4 + -1);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8015E468:
{
}

loc_8015E46C:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8015E47C;
    }
}

loc_8015E470:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E454;
    }
}

loc_8015E47C:
{
    r0 = (r6 - r4);
    r4 = (r5 + r0);
}

loc_8015E484:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(128));
}

loc_8015E488:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E498;
    }
}

loc_8015E48C:
{
    r0 = 0;
    MemoryInline::FlatWriteRam8((r1 + 135), static_cast<uint8_t>(r0));
    goto loc_8015E4E0;
}

loc_8015E498:
{
    r0 = (r29 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -26048));
    r3_addr_5 = (r3 + r0);
    r0 = MemoryInline::FlatRead32(r3_addr_5);
    r0 = (r0 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015E4A8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015E4D4;
    }
}

loc_8015E4AC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(127));
}

loc_8015E4B0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E4C4;
    }
}

loc_8015E4B4:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_6 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_6, static_cast<uint8_t>(r0));
    goto loc_8015E4E0;
}

loc_8015E4C4:
{
    r3 = (r1 + 8);
    r0 = 47;
    r3_addr_7 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_7, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_8015E4D4:
{
    r3 = (r1 + 8);
    r0 = 0;
    r3_addr_9 = (r3 + r4);
    MemoryInline::FlatWrite8(r3_addr_9, static_cast<uint8_t>(r0));
}

loc_8015E4E0:
{
    r3 = 0x80290000u;
    r4 = r28;
    r3 = (r3 + -32024);
    r5 = (r1 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(2), static_cast<uint32_t>(6), static_cast<uint32_t>(6), static_cast<uint32_t>(6));
    ctx->lr = 0x8015E4F8u;
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
    ctx->xer = xer;
    InvokeDirectCpu<0x801A25D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r11 = ctx->gpr[11];
    r13 = ctx->gpr[13];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0;
    goto loc_8015E550;
}

loc_8015E500:
{
    r6 = (r3 * 12);
    r3 = MemoryInline::FlatRead32((r13 + -26048));
    r3_addr_11 = (r3 + r6);
    r0 = MemoryInline::FlatRead32(r3_addr_11);
    r0 = (r0 & -16777216);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8015E510:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015E51C;
    }
}

loc_8015E514:
{
    r3 = 0;
    goto loc_8015E550;
}

loc_8015E51C:
{
    r3 = (r3 + r6);
    r4 = MemoryInline::FlatRead32((r13 + -25956));
    r5 = MemoryInline::FlatRead32((r3 + 4));
    r0 = 0;
    r3 = 1;
    r4 = PPC_Srw(static_cast<uint32_t>(r5), static_cast<uint32_t>(r4));
    MemoryInline::FlatWrite32((r27 + 48), r4);
    r4 = MemoryInline::FlatRead32((r13 + -26048));
    r4 = (r4 + r6);
    r4 = MemoryInline::FlatRead32((r4 + 8));
    MemoryInline::FlatWrite32((r27 + 52), r4);
    MemoryInline::FlatWrite32((r27 + 56), r0);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_8015E550:
{
    r11 = (r1 + 160);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 164));
    ctx->lr = r0;
    r1 = (r1 + 160);
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
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8015E2BC func_8015E2BC preserves=true fpr_mask=0x00000000
