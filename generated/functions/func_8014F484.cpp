#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014F484(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
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
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8014F484;

loc_8014F484:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r7 = 0x80330000u;
    r8 = r4;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r7 = (r7 + 23888);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r6;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead16((r7 + 126));
}

loc_8014F4BC:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(660))) {
        goto loc_8014F4C8;
    }
}

loc_8014F4C0:
{
    r4 = MemoryInline::FlatRead16((r7 + 124));
    goto loc_8014F4CC;
}

loc_8014F4C8:
{
    r4 = 660;
}

loc_8014F4CC:
{
    r0 = (r4 + -12);
    r0 = (r0 & 65535);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
}

loc_8014F4D8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8014F4E0;
    }
}

loc_8014F4DC:
{
    r31 = 0;
}

loc_8014F4E0:
{
    r3 = MemoryInline::FlatRead16((r3 + 40));
    r4 = r31;
    r6 = r8;
    r5 = 9;
    ctx->lr = 0x8014F4F4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8014E5C0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014F4F8:
{
    r5 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8014F528;
    }
}

loc_8014F500:
{
    r3 = 0x80340000u;
    r0 = MemoryInline::FlatRead8((r3 + -27840));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8014F50C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8014F604;
    }
}

loc_8014F510:
{
    r3 = 524288;
    r4 = 0x80280000u;
    r3 = (r3 + 1);
    r4 = (r4 + 27124);
    ctx->lr = 0x8014F524u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80131740u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8014F604;
}

loc_8014F528:
{
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8014F52C:
{
    r7 = (r3 + 20);
    if (((cr & 0x02000000u) != 0)) {
        goto loc_8014F5F8;
    }
}

loc_8014F534:
{
    r8 = 0;
    if (((cr & 0x04000000u) == 0)) {
        goto loc_8014F5F8;
    }
}

loc_8014F53C:
{
}

loc_8014F540:
{
    r4 = (r31 + -8);
    if ((static_cast<int32_t>(r31) <= static_cast<int32_t>(8))) {
        goto loc_8014F5D0;
    }
}

loc_8014F548:
{
    r6 = 0;
    if (((cr & 0x08000000u) != 0)) {
        goto loc_8014F564;
    }
}

loc_8014F550:
{
    r3 = 0x80000000u;
    r0 = (r3 + -2);
}

loc_8014F55C:
{
    if ((static_cast<int32_t>(r31) > static_cast<int32_t>(r0))) {
        goto loc_8014F564;
    }
}

loc_8014F560:
{
    r6 = 1;
}

loc_8014F564:
{
}

loc_8014F568:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8014F5D0;
    }
}

loc_8014F56C:
{
    r0 = (r4 + 7);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
    ctr = r0;
}

loc_8014F57C:
{
    if ((static_cast<int32_t>(r4) <= static_cast<int32_t>(0))) {
        goto loc_8014F5D0;
    }
}

loc_8014F580:
{
    r30_addr_2 = (r30 + r8);
    r0 = MemoryInline::FlatRead8(r30_addr_2);
    r3 = (r30 + r8);
    r8 = (r8 + 8);
    guest_range_0 = MemoryInline::ResolveRangeHost(r7, 0, 8u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, r7, static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 1));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r7 + 1), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 2));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r7 + 2), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 3));
    MemoryInline::WriteResolved8(guest_range_0, 3u, (r7 + 3), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 4));
    MemoryInline::WriteResolved8(guest_range_0, 4u, (r7 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r7 + 5), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r7 + 6), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r3 + 7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r7 + 7), static_cast<uint8_t>(r0));
    r7 = (r7 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014F580;
    }
}

loc_8014F5D0:
{
    r0 = (r31 - r8);
    r3 = (r30 + r8);
    ctr = r0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(r31));
}

loc_8014F5E0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8014F5F8;
    }
}

loc_8014F5E4:
{
    r0 = MemoryInline::FlatRead8(r3);
    r3 = (r3 + 1);
    MemoryInline::FlatWrite8(r7, static_cast<uint8_t>(r0));
    r7 = (r7 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8014F5E4;
    }
}

loc_8014F5F8:
{
    r3 = r29;
    r4 = 0;
    ctx->lr = 0x8014F604u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8014C8F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8014F604:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
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
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8014F484 func_8014F484 preserves=true fpr_mask=0x00000000
