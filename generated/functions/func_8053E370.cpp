#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8053E370(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r5_addr_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8053E370;

loc_8053E370:
{
    r4 = 0x80890000u;
    r8 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 928));
    r0 = 255;
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 264), 0, 36u, false, true);
    MemoryInline::WriteResolved8(guest_range_0, 0u, (r3 + 264), static_cast<uint8_t>(r0));
    r9 = 0;
    r10 = 0;
    r6 = 1;
    MemoryInline::WriteResolved16(guest_range_0, 14u, (r3 + 278), static_cast<uint16_t>(r8));
    r5 = 0x809C0000u;
    MemoryInline::WriteResolved16(guest_range_0, 18u, (r3 + 282), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 24u, (r3 + 288), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 32u, (r3 + 296), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 1u, (r3 + 265), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved16(guest_range_0, 16u, (r3 + 280), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved16(guest_range_0, 20u, (r3 + 284), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolvedFloat32(guest_range_0, 28u, (r3 + 292), f0.d);
    MemoryInline::WriteResolved16(guest_range_0, 34u, (r3 + 298), static_cast<uint16_t>(r8));
    MemoryInline::WriteResolved8(guest_range_0, 2u, (r3 + 266), static_cast<uint8_t>(r8));
    goto loc_8053E420;
}

loc_8053E3C0:
{
    r0 = (r10 & 255);
    r0 = (r0 * 240);
    r4 = (r7 + r0);
    r0 = MemoryInline::FlatRead32((r4 + 56));
}

loc_8053E3D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8053E3F4;
    }
}

loc_8053E3D8:
{
    r4 = (r9 & 255);
    r9 = (r9 + 1);
    r0 = (r9 & 255);
    r4 = (r3 + r4);
}

loc_8053E3EC:
{
    MemoryInline::FlatWrite8((r4 + 264), static_cast<uint8_t>(r10));
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(2))) {
        goto loc_8053E434;
    }
}

loc_8053E3F4:
{
    r4 = (r10 & 255);
    r7 = MemoryInline::FlatRead8((r3 + 266));
    r0 = (r4 * 20);
    r10 = (r10 + 1);
    r4 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r4));
    r4 = (r7 | r4);
    MemoryInline::FlatWrite8((r3 + 266), static_cast<uint8_t>(r4));
    r4 = (r3 + r0);
    MemoryInline::FlatWrite8((r4 + 18), static_cast<uint8_t>(r8));
    MemoryInline::FlatWrite16((r4 + 20), static_cast<uint16_t>(r8));
    MemoryInline::FlatWrite16((r4 + 22), static_cast<uint16_t>(r8));
}

loc_8053E420:
{
    r7 = MemoryInline::FlatRead32((r5 + -10456));
    r4 = (r10 & 255);
    r0 = MemoryInline::FlatRead8((r7 + 36));
}

loc_8053E430:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r0))) {
        goto loc_8053E3C0;
    }
}

loc_8053E434:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 267), static_cast<uint8_t>(r9));
    r4 = 0x809C0000u;
    MemoryInline::FlatWrite32((r3 + 268), r0);
    MemoryInline::FlatWrite8((r3 + 276), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r4 + -10456));
    r0 = MemoryInline::FlatRead32((r4 + 2920));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(32));
}

loc_8053E454:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8053E45C;
    }
}

loc_8053E458:
{
    r0 = 32;
}

loc_8053E45C:
{
    r5 = 0x80890000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + 932);
    r4 = 0x809C0000u;
    r5_addr_0 = (r5 + r0);
    r0 = MemoryInline::FlatRead32(r5_addr_0);
    MemoryInline::FlatWrite32((r3 + 272), r0);
    r3 = MemoryInline::FlatRead32((r4 + 8016));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    InvokeDirectCpu<0x80653D78u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00007DB gpr_write=0xC00007FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x8053E370 func_8053E370 preserves=true fpr_mask=0x00000000
