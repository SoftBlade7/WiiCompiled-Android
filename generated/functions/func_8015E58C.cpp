#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8015E58C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r28_addr_0 = 0;
    uint32_t r28_addr_1 = 0;
    uint32_t r28_addr_2 = 0;
    uint32_t r28_addr_3 = 0;
    uint32_t r28_addr_4 = 0;
    uint32_t r28_addr_5 = 0;
    uint32_t r28_addr_6 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;
    uint32_t r8_addr_0 = 0;
    uint32_t r8_addr_1 = 0;
    uint32_t r8_addr_2 = 0;
    uint32_t r8_addr_3 = 0;
    uint32_t r8_addr_4 = 0;
    uint32_t r8_addr_5 = 0;
    uint32_t r8_addr_6 = 0;

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

    goto loc_8015E58C;

loc_8015E58C:
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015E5A4:
{
    r28 = r4;
    r29 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E5B8;
    }
}

loc_8015E5B0:
{
    r3 = 0;
    goto loc_8015E734;
}

loc_8015E5B8:
{
    r8 = MemoryInline::FlatRead32((r13 + -26048));
    r0 = (r3 * 12);
    r7 = MemoryInline::FlatRead32((r13 + -26052));
    r6 = (r8 + 4);
    r6_addr_1 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_1);
    r8_addr_1 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_1);
}

loc_8015E5D4:
{
    r0 = (r0 & 16777215);
    r30 = (r7 + r0);
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8015E5E8;
    }
}

loc_8015E5E0:
{
    r4 = 0;
    goto loc_8015E6D8;
}

loc_8015E5E8:
{
    r0 = (r3 * 12);
    r6_addr_2 = (r6 + r0);
    r3 = MemoryInline::FlatRead32(r6_addr_2);
    r8_addr_2 = (r8 + r0);
    r0 = MemoryInline::FlatRead32(r8_addr_2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8015E5F8:
{
    r0 = (r0 & 16777215);
    r31 = (r7 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E60C;
    }
}

loc_8015E604:
{
    r4 = 0;
    goto loc_8015E680;
}

loc_8015E60C:
{
    r3 = (r3 * 12);
    r8_addr_3 = (r8 + r3);
    r0 = MemoryInline::FlatRead32(r8_addr_3);
    r6_addr_3 = (r6 + r3);
    r3 = MemoryInline::FlatRead32(r6_addr_3);
    r0 = (r0 & 16777215);
    r27 = (r7 + r0);
    ctx->lr = 0x8015E624u;
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

loc_8015E628:
{
    r4 = r3;
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r29))) {
        goto loc_8015E634;
    }
}

loc_8015E630:
{
    goto loc_8015E680;
}

loc_8015E634:
{
    r4 = (r3 + 1);
    r0 = 47;
    r6 = (r29 - r4);
    r28_addr_1 = (r28 + r3);
    MemoryInline::FlatWrite8(r28_addr_1, static_cast<uint8_t>(r0));
    r3 = (r28 + r4);
    r5 = r6;
    goto loc_8015E664;
}

loc_8015E650:
{
    r0 = MemoryInline::FlatRead8(r27);
    r5 = (r5 + -1);
    r27 = (r27 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8015E664:
{
}

loc_8015E668:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8015E678;
    }
}

loc_8015E66C:
{
    r0 = MemoryInline::FlatRead8(r27);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E650;
    }
}

loc_8015E678:
{
    r0 = (r6 - r5);
    r4 = (r4 + r0);
}

loc_8015E680:
{
}

loc_8015E684:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r29))) {
        goto loc_8015E68C;
    }
}

loc_8015E688:
{
    goto loc_8015E6D8;
}

loc_8015E68C:
{
    r3 = (r4 + 1);
    r0 = 47;
    r6 = (r29 - r3);
    r28_addr_3 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_3, static_cast<uint8_t>(r0));
    r4 = (r28 + r3);
    r5 = r6;
    goto loc_8015E6BC;
}

loc_8015E6A8:
{
    r0 = MemoryInline::FlatRead8(r31);
    r5 = (r5 + -1);
    r31 = (r31 + 1);
    MemoryInline::FlatWrite8(r4, static_cast<uint8_t>(r0));
    r4 = (r4 + 1);
}

loc_8015E6BC:
{
}

loc_8015E6C0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8015E6D0;
    }
}

loc_8015E6C4:
{
    r0 = MemoryInline::FlatRead8(r31);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8015E6A8;
    }
}

loc_8015E6D0:
{
    r0 = (r6 - r5);
    r4 = (r3 + r0);
}

loc_8015E6D8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r29));
}

loc_8015E6DC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E6E8;
    }
}

loc_8015E6E0:
{
    r3 = r4;
    goto loc_8015E734;
}

loc_8015E6E8:
{
    r6 = (r4 + 1);
    r0 = 47;
    r5 = (r29 - r6);
    r28_addr_5 = (r28 + r4);
    MemoryInline::FlatWrite8(r28_addr_5, static_cast<uint8_t>(r0));
    r3 = (r28 + r6);
    r4 = r5;
    goto loc_8015E718;
}

loc_8015E704:
{
    r0 = MemoryInline::FlatRead8(r30);
    r4 = (r4 + -1);
    r30 = (r30 + 1);
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r0));
    r3 = (r3 + 1);
}

loc_8015E718:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8015E71C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8015E72C;
    }
}

loc_8015E720:
{
    r0 = MemoryInline::FlatRead8(r30);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8015E704;
    }
}

loc_8015E72C:
{
    r0 = (r5 - r4);
    r3 = (r6 + r0);
}

loc_8015E734:
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

// RECOMP_GUEST_ABI gpr_read=0xF80027FB gpr_write=0xF80009FB gpr_return=0x00000018 fpr_read=0x00003FFE fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8015E58C func_8015E58C preserves=true fpr_mask=0x00000000
