#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053E680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053E680;

loc_8053E680:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    r8 = 0;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r27);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r29 = r3;
    r31 = 0;
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r6 = MemoryInline::FlatRead8((r4 + 36));
    r7 = (r4 + 40);
    goto loc_8053E6E8;
}

loc_8053E6B0:
{
    r5 = (r8 & 255);
    r0 = (r5 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 16));
}

loc_8053E6C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053E6E4;
    }
}

loc_8053E6C8:
{
    r0 = (r5 * 20);
    r5 = (r3 + r0);
    r4 = MemoryInline::FlatRead16((r5 + 22));
    r0 = MemoryInline::FlatRead16((r5 + 24));
    r0 = (r4 & ~r0);
    r0 = (r0 & 65535);
    r31 = (r31 | r0);
}

loc_8053E6E4:
{
    r8 = (r8 + 1);
}

loc_8053E6E8:
{
    r0 = (r8 & 255);
}

loc_8053E6F0:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r6))) {
        goto loc_8053E6B0;
    }
}

loc_8053E6F4:
{
    r30 = 0;
    r27 = 1;
    r28 = 0x809C0000u;
    goto loc_8053E784;
}

loc_8053E704:
{
    r3 = MemoryInline::FlatRead32((r29 + 4));
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & 1020);
    r3 = MemoryInline::FlatRead32((r3 + 12));
    r3_addr_2 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_2);
    r0 = MemoryInline::FlatRead32((r3 + 56));
    r0 = (r0 & 2);
}

loc_8053E71C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053E780;
    }
}

loc_8053E720:
{
    r4 = (r30 & 255);
    r5 = (r31 & 65535);
    r0 = PPC_Slw(static_cast<uint32_t>(r27), static_cast<uint32_t>(r4));
    r0 = (r5 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8053E780;
    }
}

loc_8053E734:
{
    r0 = MemoryInline::FlatRead8((r29 + 267));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053E73C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053E768;
    }
}

loc_8053E740:
{
    r0 = (r4 * 20);
    r4 = (r29 + r0);
    r0 = MemoryInline::FlatRead8((r4 + 18));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8053E750:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8053E780;
    }
}

loc_8053E754:
{
    r4 = (r4 + 8);
    r5 = 0;
    r6 = 5;
    ctx->lr = 0x8053E764u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805347F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_8053E780;
}

loc_8053E768:
{
    r0 = (r4 * 20);
    r5 = 0;
    r6 = 5;
    r4 = (r29 + r0);
    r4 = (r4 + 8);
    ctx->lr = 0x8053E780u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x805347F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8053E780:
{
    r30 = (r30 + 1);
}

loc_8053E784:
{
    r3 = MemoryInline::FlatRead32((r28 + -10456));
    r4 = (r30 & 255);
    r0 = MemoryInline::FlatRead8((r3 + 36));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_8053E794:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053E704;
    }
}

loc_8053E798:
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
    ctx->gpr[8] = r8;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8053E680 func_8053E680 preserves=true fpr_mask=0x00000000
