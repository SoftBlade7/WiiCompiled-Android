#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E55A0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E55A0;

loc_801E55A0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r3 = r31;
    ctx->lr = 0x801E55C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801DE974u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801E55C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E55D4;
    }
}

loc_801E55CC:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E55D4:
{
    r6 = MemoryInline::FlatRead32((r30 + 16));
    r0 = (r6 & 1);
}

loc_801E55DC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E55F4;
    }
}

loc_801E55E0:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E55E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E55F4;
    }
}

loc_801E55EC:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E55F4:
{
    r0 = (r6 & 2);
}

loc_801E55F8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801E5610;
    }
}

loc_801E55FC:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E5604:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E5610;
    }
}

loc_801E5608:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E5610:
{
    r0 = (r6 & 32);
}

loc_801E5614:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E5630;
    }
}

loc_801E5618:
{
    r3 = MemoryInline::FlatRead32((r30 + 32));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
}

loc_801E5624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E5630;
    }
}

loc_801E5628:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E5630:
{
    r0 = (r6 & 16);
}

loc_801E5634:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801E5674;
    }
}

loc_801E5638:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E5640:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E564C;
    }
}

loc_801E5644:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E564C:
{
    r4 = MemoryInline::FlatRead32((r30 + 24));
    r0 = MemoryInline::FlatRead32((r31 + 32));
    r5 = MemoryInline::FlatRead32((r30 + 28));
    r3 = MemoryInline::FlatRead32((r31 + 36));
    r0 = (r4 ^ r0);
    r3 = (r5 ^ r3);
    r0 = (r3 | r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E5674;
    }
}

loc_801E566C:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E5674:
{
    r0 = (r6 & 256);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E5678:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E5738;
    }
}

loc_801E567C:
{
    r4 = MemoryInline::FlatRead32((r30 + 36));
    r3 = MemoryInline::FlatRead32((r31 + 20));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r5 = (r4 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_801E5690:
{
    r4 = (r3 & 65535);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E56E0;
    }
}

loc_801E5698:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E56AC;
    }
}

loc_801E569C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E56A0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E56BC;
    }
}

loc_801E56A4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E56D0;
    }
}

loc_801E56A8:
{
    goto loc_801E5724;
}

loc_801E56AC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801E56B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801E5710;
    }
}

loc_801E56B4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801E5724;
    }
}

loc_801E56B8:
{
    goto loc_801E56F8;
}

loc_801E56BC:
{
    r3 = (r5 - r4);
    r0 = (r4 - r5);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
    goto loc_801E5728;
}

loc_801E56D0:
{
    r0 = (r5 - r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_2 & 134217727);
    goto loc_801E5728;
}

loc_801E56E0:
{
    r0 = (r5 - r4);
    r3 = (r5 | ~r4);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_7 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_8 & 1);
    goto loc_801E5728;
}

loc_801E56F8:
{
    r0 = (r4 - r5);
    r3 = (r4 | ~r5);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r3 - r0);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_5 & 1);
    goto loc_801E5728;
}

loc_801E5710:
{
    r3 = (r4 & r5);
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_6 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_6 & 1);
    goto loc_801E5728;
}

loc_801E5724:
{
    r0 = 0;
}

loc_801E5728:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801E572C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E5738;
    }
}

loc_801E5730:
{
    r3 = 0;
    goto loc_801E573C;
}

loc_801E5738:
{
    r3 = 1;
}

loc_801E573C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000207B gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801E55A0 func_801E55A0 preserves=true fpr_mask=0x00000000
