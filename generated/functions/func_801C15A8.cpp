#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C15A8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801C15A8;

loc_801C15A8:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4 = (r4 + 2352);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r4_addr_0 = (r4 + r0);
    r31 = MemoryInline::FlatRead32(r4_addr_0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r31 + 2248));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_1 & 255);
    r0 = (r0 * 96);
    r6 = (r31 + r0);
    r4 = MemoryInline::FlatRead16((r6 + 160));
    r0 = (r4 & 3);
}

loc_801C15EC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(3))) {
        goto loc_801C15F8;
    }
}

loc_801C15F0:
{
    r0 = (r4 & -3);
    MemoryInline::FlatWrite16((r6 + 160), static_cast<uint16_t>(r0));
}

loc_801C15F8:
{
    r4 = MemoryInline::FlatRead16((r6 + 160));
    r0 = (r4 & 12);
}

loc_801C1604:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(12))) {
        goto loc_801C1610;
    }
}

loc_801C1608:
{
    r0 = (r4 & -5);
    MemoryInline::FlatWrite16((r6 + 160), static_cast<uint16_t>(r0));
}

loc_801C1610:
{
    r4 = MemoryInline::FlatRead32((r31 + 2232));
    r0 = (r4 + -6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_801C161C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_801C1654;
    }
}

loc_801C1620:
{
    r5 = MemoryInline::FlatRead16((r6 + 202));
    r4 = (r5 & 32770);
}

loc_801C1628:
{
    r0 = (r4 + 0);
}

loc_801C1630:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(32770))) {
        goto loc_801C163C;
    }
}

loc_801C1634:
{
    r0 = (r5 & 32767);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_801C163C:
{
    r4 = MemoryInline::FlatRead16((r6 + 202));
    r0 = (r4 & 16385);
}

loc_801C1644:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16385));
}

loc_801C1648:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C1654;
    }
}

loc_801C164C:
{
    r0 = (r4 & -16385);
    MemoryInline::FlatWrite16((r6 + 202), static_cast<uint16_t>(r0));
}

loc_801C1654:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000007B gpr_write=0x8000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C15A8 func_801C15A8 preserves=true fpr_mask=0x00000000
