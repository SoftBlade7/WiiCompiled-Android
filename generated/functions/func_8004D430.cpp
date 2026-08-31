#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8004D430(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8004D430;

loc_8004D430:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    r4 = 0x80270000u;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    r4 = (r4 + 9888);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 56u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 60u, (r1 + 60), r31);
        MemoryInline::WriteResolved32(guest_range_0, 56u, (r1 + 56), r30);
    }
    r30 = r3;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 48u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r29);
        MemoryInline::WriteResolved32(guest_range_0, 48u, (r1 + 48), r28);
    }
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r4);
    r4 = (r1 + 36);
    r5 = MemoryInline::FlatRead32(r3);
    r3 = (r1 + 32);
    r0 = (r5 + 24);
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r0);
    ctx->lr = 0x8004D474u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D478:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D49C;
    }
}

loc_8004D47C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_0 & 1);
}

loc_8004D488:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D494;
    }
}

loc_8004D48C:
{
    r28 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D4A0;
}

loc_8004D494:
{
    r28 = 0;
    goto loc_8004D4A0;
}

loc_8004D49C:
{
    r28 = 0;
}

loc_8004D4A0:
{
    r29 = 0x80270000u;
    r31 = 0;
    r29 = (r29 + 9888);
    goto loc_8004D528;
}

loc_8004D4B0:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r29);
    r4 = (r1 + 24);
    r3 = (r1 + 28);
    r5 = MemoryInline::FlatRead32(r30);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 28), r0);
    ctx->lr = 0x8004D4CCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004D4D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D514;
    }
}

loc_8004D4D4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_4 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D4E0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D50C;
    }
}

loc_8004D4E4:
{
    r0 = (r31 + 1);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_5 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D4F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D504;
    }
}

loc_8004D4FC:
{
    r0 = (r3 + r0);
    goto loc_8004D518;
}

loc_8004D504:
{
    r0 = 0;
    goto loc_8004D518;
}

loc_8004D50C:
{
    r0 = 0;
    goto loc_8004D518;
}

loc_8004D514:
{
    r0 = 0;
}

loc_8004D518:
{
    MemoryInline::FlatWriteRam32((r1 + 44), r0);
    r3 = (r1 + 44);
    ctx->lr = 0x8004D524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004ED40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = (r31 + 1);
}

loc_8004D528:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r28));
}

loc_8004D52C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D4B0;
    }
}

loc_8004D530:
{
    r3 = 0x80270000u;
    r4 = (r1 + 20);
    r3 = (r3 + 10080);
    MemoryInline::FlatWriteRam32((r1 + 20), r3);
    r3 = (r1 + 16);
    r5 = MemoryInline::FlatRead32(r30);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    ctx->lr = 0x8004D554u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8004D558:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8004D57C;
    }
}

loc_8004D55C:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_7 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_7 & 1);
}

loc_8004D568:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8004D574;
    }
}

loc_8004D56C:
{
    r28 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_8004D580;
}

loc_8004D574:
{
    r28 = 0;
    goto loc_8004D580;
}

loc_8004D57C:
{
    r28 = 0;
}

loc_8004D580:
{
    r29 = 0x80270000u;
    r31 = 0;
    r29 = (r29 + 10080);
    goto loc_8004D608;
}

loc_8004D590:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r29);
    r4 = (r1 + 8);
    r3 = (r1 + 12);
    r5 = MemoryInline::FlatRead32(r30);
    r0 = (r5 + 24);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    ctx->lr = 0x8004D5ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8004C0D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8004D5B0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D5F4;
    }
}

loc_8004D5B4:
{
    r0 = (0 - r3);
    r0 = (r0 | r3);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_10 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D5C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D5EC;
    }
}

loc_8004D5C4:
{
    r0 = (r31 + 1);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_11 & -16);
    r4 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 20));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8004D5D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8004D5E4;
    }
}

loc_8004D5DC:
{
    r0 = (r3 + r0);
    goto loc_8004D5F8;
}

loc_8004D5E4:
{
    r0 = 0;
    goto loc_8004D5F8;
}

loc_8004D5EC:
{
    r0 = 0;
    goto loc_8004D5F8;
}

loc_8004D5F4:
{
    r0 = 0;
}

loc_8004D5F8:
{
    MemoryInline::FlatWriteRam32((r1 + 40), r0);
    r3 = (r1 + 40);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x80053740u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r31 = (r31 + 1);
}

loc_8004D608:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(r28));
}

loc_8004D60C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8004D590;
    }
}

loc_8004D610:
{
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 60));
    r30 = MemoryInline::FlatRead32((r1 + 56));
    r29 = MemoryInline::FlatRead32((r1 + 52));
    r28 = MemoryInline::FlatRead32((r1 + 48));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00007FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8004D430 func_8004D430 preserves=true fpr_mask=0x00000000
