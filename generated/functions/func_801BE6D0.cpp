#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801BE6D0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r31_addr_0 = 0;
    uint32_t r31_addr_1 = 0;
    uint32_t r31_addr_2 = 0;
    uint32_t r4_rot_0 = 0;

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

    goto loc_801BE6D0;

loc_801BE6D0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80350000u;
    r31 = (r31 + 2352);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r30 = (r30_rot_0 & -4);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = -1;
    r31_addr_0 = (r31 + r30);
    r29 = MemoryInline::FlatRead32(r31_addr_0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead8((r29 + 2248));
    r5 = MemoryInline::FlatRead32((r29 + 2232));
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r4_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_0 & 255);
    r0 = (r5 + -3);
    r4 = (r4 * 96);
}

loc_801BE720:
{
    r4 = (r29 + r4);
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801BE738;
    }
}

loc_801BE728:
{
    r0 = MemoryInline::FlatRead16((r4 + 160));
}

loc_801BE730:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7184))) {
        goto loc_801BE738;
    }
}

loc_801BE734:
{
    r28 = 1;
}

loc_801BE738:
{
    r0 = (r5 + -6);
}

loc_801BE740:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_801BE778;
    }
}

loc_801BE744:
{
    r0 = MemoryInline::FlatRead16((r4 + 160));
}

loc_801BE74C:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(7184))) {
        goto loc_801BE754;
    }
}

loc_801BE750:
{
    r28 = 1;
}

loc_801BE754:
{
    r0 = MemoryInline::FlatRead8((r4 + 201));
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r0)));
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_801BE768;
    }
}

loc_801BE760:
{
    r28 = 0;
    goto loc_801BE778;
}

loc_801BE768:
{
    r0 = MemoryInline::FlatRead16((r4 + 202));
}

loc_801BE770:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(5200))) {
        goto loc_801BE778;
    }
}

loc_801BE774:
{
    r28 = 1;
}

loc_801BE778:
{
}

loc_801BE77C:
{
    if ((static_cast<int32_t>(r28) >= static_cast<int32_t>(0))) {
        goto loc_801BE78C;
    }
}

loc_801BE780:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r29 + 2322), static_cast<uint16_t>(r0));
    goto loc_801BE798;
}

loc_801BE78C:
{
    r0 = MemoryInline::FlatRead16((r29 + 2322));
    r0 = (r0 + r28);
    MemoryInline::FlatWrite16((r29 + 2322), static_cast<uint16_t>(r0));
}

loc_801BE798:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead16((r29 + 2322));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(600));
}

loc_801BE7A4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_801BE7BC;
    }
}

loc_801BE7A8:
{
    r31_addr_1 = (r31 + r30);
    r28 = MemoryInline::FlatRead32(r31_addr_1);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = 0;
    MemoryInline::FlatWrite8((r28 + 2321), static_cast<uint8_t>(r0));
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801BE7BC:
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

// RECOMP_GUEST_ABI gpr_read=0xF000003B gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801BE6D0 func_801BE6D0 preserves=true fpr_mask=0x00000000
