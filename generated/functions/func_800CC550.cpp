#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800CC550(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800CC550;

loc_800CC550:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CC55C:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC588;
    }
}

loc_800CC580:
{
    r3 = 15;
    goto loc_800CC6CC;
}

loc_800CC588:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800CC58C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC598;
    }
}

loc_800CC590:
{
    r3 = 15;
    goto loc_800CC6CC;
}

loc_800CC598:
{
    // inline leaf 0x800BC370 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -26984));
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r3 = (r3_rot_1 & 1);
    // end of inlined leaf 0x800BC370
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800CC5A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC5AC;
    }
}

loc_800CC5A4:
{
    r3 = 1;
    goto loc_800CC6CC;
}

loc_800CC5AC:
{
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = PPC_Slw(static_cast<uint32_t>(r0), static_cast<uint32_t>(r28));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 134217727);
    r0 = (r3 & r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CC5D0;
    }
}

loc_800CC5C8:
{
    r3 = 10;
    goto loc_800CC6CC;
}

loc_800CC5D0:
{
    r0 = MemoryInline::FlatRead16((r29 + 2));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_800CC5D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC5E4;
    }
}

loc_800CC5DC:
{
    r28 = 0;
    goto loc_800CC5F0;
}

loc_800CC5E4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CC5F0;
    }
}

loc_800CC5E8:
{
    r0 = (r28 + -1);
    r28 = (r0 & 65535);
}

loc_800CC5F0:
{
    r0 = MemoryInline::FlatRead8(r29);
    r5 = (r28 & 65535);
    r4 = MemoryInline::FlatRead16((r31 + 12));
    r3 = (r0 * 76);
    r6 = MemoryInline::FlatRead32((r29 + 12));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_800CC608:
{
    r0 = (r3 + 8);
    r0 = (r5 * r0);
    r29 = (r6 + r0);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800CC620;
    }
}

loc_800CC618:
{
    r3 = 15;
    goto loc_800CC6CC;
}

loc_800CC620:
{
    r0 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(5));
}

loc_800CC628:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800CC634;
    }
}

loc_800CC62C:
{
    r3 = 15;
    goto loc_800CC6CC;
}

loc_800CC634:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(6));
    r5 = (r5_rot_1 & -64);
    r3 = MemoryInline::FlatRead32((r31 + 8));
    r4 = 0;
    ctx->lr = 0x800CC64Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80006038u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = (r29 + 8);
    r28 = 0;
    goto loc_800CC6A8;
}

loc_800CC658:
{
    r3 = r30;
    ctx->lr = 0x800CC660u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800CB840u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_800CC664:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800CC6A0;
    }
}

loc_800CC668:
{
    r3 = MemoryInline::FlatRead16((r31 + 14));
    r0 = MemoryInline::FlatRead16((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_800CC674:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CC680;
    }
}

loc_800CC678:
{
    r3 = 9;
    goto loc_800CC6CC;
}

loc_800CC680:
{
    r4 = MemoryInline::FlatRead32((r31 + 8));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_3 & 4194240);
    r3 = r30;
    r4 = (r4 + r0);
    ctx->lr = 0x800CC694u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800C7100u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r31 + 14));
    r0 = (r3 + 1);
    MemoryInline::FlatWrite16((r31 + 14), static_cast<uint16_t>(r0));
}

loc_800CC6A0:
{
    r30 = (r30 + 76);
    r28 = (r28 + 1);
}

loc_800CC6A8:
{
    r0 = MemoryInline::FlatRead16((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(r0));
}

loc_800CC6B0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800CC658;
    }
}

loc_800CC6B4:
{
    r4 = MemoryInline::FlatRead16((r31 + 14));
    r3 = 0;
    r0 = MemoryInline::FlatRead16((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_800CC6C4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_800CC6CC;
    }
}

loc_800CC6C8:
{
    r3 = 10;
}

loc_800CC6CC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF80023FB gpr_write=0xF8001FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800CC550 func_800CC550 preserves=true fpr_mask=0x00000000
