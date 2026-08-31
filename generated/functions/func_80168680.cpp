#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80168680(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r3_rot_6 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80168680;

loc_80168680:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(6));
    r0 = (r0_rot_0 & -64);
    r4 = 0x80340000u;
    r4 = (r4 + 13952);
    r31 = (r4 + r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(2));
}

loc_801686B4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801686C0;
    }
}

loc_801686B8:
{
    r3 = 1;
    goto loc_801687E0;
}

loc_801686C0:
{
    r29 = 1;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r30 = r3;
    r3 = (r28 * 20);
    r0 = -855638016;
    r3 = (r0 + r3);
    r5 = MemoryInline::FlatRead32((r3 + 26624));
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 & 8);
}

loc_801686E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801687A8;
    }
}

loc_801686E8:
{
    r0 = (r5 & 2048);
}

loc_801686EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80168718;
    }
}

loc_801686F0:
{
    r0 = MemoryInline::FlatRead32((r3 + 26624));
    r0 = (r0 & 2037);
}

loc_801686F8:
{
    r0 = (r0 | 2048);
    MemoryInline::FlatWrite32((r3 + 26624), r0);
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 32), r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    r0 = 0x80000000u;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 12480), r4);
}

loc_80168718:
{
    r0 = (r5 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016871C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80168788;
    }
}

loc_80168720:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = 0x80000000u;
    r0 = MemoryInline::FlatRead32((r31 + 248));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(30));
    r0 = (r0_rot_1 & 1073741823);
    r5 = 274857984;
    r5 = (r5 + 19923);
    r0 = (static_cast<uint32_t>((static_cast<uint64_t>(r5) * static_cast<uint64_t>(r0)) >> 32));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(26));
    r6 = (r6_rot_1 & 67108863);
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r6 = 100;
    r5 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x800216F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = (r4 + 1);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r3 = (r31 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 12480));
}

loc_80168768:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80168770;
    }
}

loc_8016876C:
{
    MemoryInline::FlatWrite32((r3 + 12480), r4);
}

loc_80168770:
{
    r0 = MemoryInline::FlatRead32((r3 + 12480));
    r0 = (r4 - r0);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(3));
}

loc_8016877C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801687D4;
    }
}

loc_80168780:
{
    r29 = 0;
    goto loc_801687D4;
}

loc_80168788:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 32), r4);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_3 & -4);
    r0 = 0x80000000u;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 12480), r4);
    r29 = 0;
    goto loc_801687D4;
}

loc_801687A8:
{
    r0 = (r5 & 4096);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801687AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801687B8;
    }
}

loc_801687B0:
{
    r0 = (r5 & 2048);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801687B4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801687D4;
    }
}

loc_801687B8:
{
    r4 = 0;
    MemoryInline::FlatWrite32((r31 + 32), r4);
    r3_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r28), static_cast<uint32_t>(2));
    r3 = (r3_rot_4 & -4);
    r0 = 0x80000000u;
    r3 = (r0 + r3);
    MemoryInline::FlatWrite32((r3 + 12480), r4);
    r29 = 0;
}

loc_801687D4:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = r29;
}

loc_801687E0:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
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

// RECOMP_GUEST_ABI gpr_read=0xF00006FB gpr_write=0xF00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80168680 func_80168680 preserves=true fpr_mask=0x00000000
