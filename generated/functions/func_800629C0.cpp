#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800629C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800629C0;

loc_800629C0:
{
    r0 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800629C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_800629CC:
{
    r10 = 0x802C0000u;
    r9 = (r10 + -32704);
    r4 = MemoryInline::FlatRead32((r9 + 8));
    r0 = (r4 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800629DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80062A58;
    }
}

loc_800629E0:
{
    r0 = (r4 & 3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_800629E8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80062A58;
    }
}

loc_800629EC:
{
    r6 = MemoryInline::FlatRead32((r9 + 4));
    r4 = -33030144;
    r8 = -872349696;
    r5 = 97;
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r0 = (r4 + -961);
    r4 = (r2 + -29528);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r4_addr_1 = (r4 + r6);
    r0 = MemoryInline::FlatRead8(r4_addr_1);
    GX_HLE_FIFO_Write8(static_cast<uint8_t>(r5));
    r6_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(14));
    r6 = (r6_rot_1 & -16384);
    r4 = MemoryInline::FlatRead8((r9 + 2));
    r0 = MemoryInline::FlatRead8((r9 + 1));
    r5 = (r4 + -1);
    r7 = MemoryInline::FlatRead8((r9 + 3));
    r4 = MemoryInline::FlatRead8((r10 + -32704));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & -16);
    r7_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r7), static_cast<uint32_t>(16));
    r7 = (r7_rot_1 & -65536);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(10));
    r5 = (r5_rot_1 & -1024);
    r0 = (r4 | r0);
    r4 = (r7 | r6);
    r0 = (r5 | r0);
    r0 = (r4 | r0);
    GX_HLE_FIFO_Write32(static_cast<uint32_t>(r0));
    r0 = MemoryInline::FlatRead32((r9 + 8));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r9 + 8), r0);
}

loc_80062A58:
{
    r4 = 0x802C0000u;
    r5 = MemoryInline::FlatRead8((r13 + -27328));
    r4 = (r4 + -32704);
    r0 = 0;
    MemoryInline::FlatWrite8((r13 + -27328), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead8((r4 + 3));
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    InvokeDirectCpu<0x80051090u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    cr = ctx->cr;
    xer = ctx->xer;
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFF803FFF gpr_write=0xFF801FFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x000003FF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x800629C0 func_800629C0 preserves=true fpr_mask=0x00000000
