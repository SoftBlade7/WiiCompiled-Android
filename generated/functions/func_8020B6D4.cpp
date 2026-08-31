#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020B6D4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_10 = 0;
    uint32_t r0_rot_11 = 0;
    uint32_t r0_rot_12 = 0;
    uint32_t r0_rot_13 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r0_rot_8 = 0;
    uint32_t r0_rot_9 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;
    uint32_t r6_addr_5 = 0;
    uint32_t r6_addr_6 = 0;

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

    goto loc_8020B6D4;

loc_8020B6D4:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r4;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    ctx->lr = 0x8020B6F4u;
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
    InvokeDirectCpu<0x8020B2B4u>(ctx);
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
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020B6F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B89C;
    }
}

loc_8020B6FC:
{
    r4 = 0x80380000u;
    r3 = 0;
    r4 = (r4 + 11504);
    goto loc_8020B714;
}

loc_8020B70C:
{
    r4 = (r4 + 2);
    r3 = (r3 + 1);
}

loc_8020B714:
{
    r0 = MemoryInline::FlatRead16(r4);
}

loc_8020B71C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B70C;
    }
}

loc_8020B720:
{
}

loc_8020B724:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(8))) {
        goto loc_8020B794;
    }
}

loc_8020B728:
{
    r6 = 0x80380000u;
    r5 = 0;
    r6 = (r6 + 11504);
    r4 = 0;
    ctr = r3;
}

loc_8020B740:
{
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8020B76C;
    }
}

loc_8020B744:
{
}

loc_8020B748:
{
    if ((static_cast<uint32_t>(r4) <= static_cast<uint32_t>(7))) {
        goto loc_8020B750;
    }
}

loc_8020B74C:
{
    r4 = 0;
}

loc_8020B750:
{
    r3 = MemoryInline::FlatRead16(r6);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r6 = (r6 + 2);
    r4 = (r4 + 1);
    r0 = PPC_Slw(static_cast<uint32_t>(r3), static_cast<uint32_t>(r0));
    r5 = (r5 + r0);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020B744;
    }
}

loc_8020B76C:
{
    r3 = 138543104;
    r0 = (r3 + 4229);
    r3 = (static_cast<uint32_t>((static_cast<uint64_t>(r0) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r3);
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_4 & 2147483647);
    r0 = (r0 + r3);
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_5 & 268435455);
    r0 = (r0 * 31);
    r7 = (r5 - r0);
    goto loc_8020B798;
}

loc_8020B794:
{
    r7 = -1;
}

loc_8020B798:
{
}

loc_8020B79C:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(-1))) {
        goto loc_8020B858;
    }
}

loc_8020B7A0:
{
    r0 = (r7 * 18);
    r3 = 0x80380000u;
    r6 = (r3 + 11520);
    r6_addr_0 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_0);
}

loc_8020B7B4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020B850;
    }
}

loc_8020B7B8:
{
    r3 = 138543104;
    r0 = 7;
    r8 = 1;
    r3 = (r3 + 4229);
    ctr = r0;
}

loc_8020B7CC:
{
    r0 = (r8 * r8);
    r5 = (r7 + r0);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r4);
    r0_rot_8 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_8 & 2147483647);
    r0 = (r0 + r4);
    r0_rot_9 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_9 & 268435455);
    r0 = (r0 * 31);
    r4 = (r5 - r0);
    r0 = (r4 * 18);
    r6_addr_2 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_2);
}

loc_8020B7FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B804;
    }
}

loc_8020B800:
{
    goto loc_8020B85C;
}

loc_8020B804:
{
    r8 = (r8 + 1);
    r0 = (r8 * r8);
    r5 = (r7 + r0);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r5)) >> 32));
    r0 = (r5 - r4);
    r0_rot_10 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(31));
    r0 = (r0_rot_10 & 2147483647);
    r0 = (r0 + r4);
    r0_rot_11 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(28));
    r0 = (r0_rot_11 & 268435455);
    r0 = (r0 * 31);
    r4 = (r5 - r0);
    r0 = (r4 * 18);
    r6_addr_3 = (r6 + r0);
    r0 = MemoryInline::FlatRead16(r6_addr_3);
}

loc_8020B838:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8020B840;
    }
}

loc_8020B83C:
{
    goto loc_8020B85C;
}

loc_8020B840:
{
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8020B7CC;
    }
}

loc_8020B848:
{
    r4 = -1;
    goto loc_8020B85C;
}

loc_8020B850:
{
    r4 = r7;
    goto loc_8020B85C;
}

loc_8020B858:
{
    r4 = -1;
}

loc_8020B85C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_8020B860:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020B894;
    }
}

loc_8020B864:
{
    r29 = (r4 * 18);
    r30 = 0x80380000u;
    r4 = 0x80380000u;
    r30 = (r30 + 11520);
    r3 = (r30 + r29);
    r4 = (r4 + 11504);
    r5 = 16;
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
    InvokeDirectCpu<0x801EF3D8u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    cr = ctx->cr;
    ctr = ctx->ctr;
    r4 = (r30 + r29);
    r3 = 1;
    MemoryInline::FlatWrite8((r4 + 16), static_cast<uint8_t>(r31));
    goto loc_8020B8A0;
}

loc_8020B894:
{
    r3 = 0;
    goto loc_8020B8A0;
}

loc_8020B89C:
{
    r3 = 0;
}

loc_8020B8A0:
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
// RECOMP_REGISTRATION base 0x8020B6D4 func_8020B6D4 preserves=true fpr_mask=0x00000000
