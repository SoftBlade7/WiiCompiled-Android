#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807D07F0(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807D07F0;

loc_807D07F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(41));
}

loc_807D07FC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    if (((cr & 0x80000000u) == 0)) {
        goto loc_807D0878;
    }
}

loc_807D080C:
{
    // inline leaf 0x80590A6C (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590A6C
    r0 = (r3 + -1);
    r4 = 0;
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_0 & 134217727);
}

loc_807D0820:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_807D0844;
    }
}

loc_807D0824:
{
    r0 = (r31 * 24);
    r3 = 0x808A0000u;
    r3 = (r3 + 26856);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_807D083C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_807D0844;
    }
}

loc_807D0840:
{
    r4 = 1;
}

loc_807D0844:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_807D0848:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807D0864;
    }
}

loc_807D084C:
{
    r0 = (r31 * 24);
    r3 = 0x808A0000u;
    r3 = (r3 + 26856);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_807D0884;
}

loc_807D0864:
{
    r0 = (r31 * 24);
    r3 = 0x808A0000u;
    r3 = (r3 + 26856);
    r3_addr_1 = (r3 + r0);
    r3 = MemoryInline::FlatRead32(r3_addr_1);
    goto loc_807D0884;
}

loc_807D0878:
{
    r3 = 0x808A0000u;
    r3 = (r3 + 29320);
    r3 = (r3 + 286);
}

loc_807D0884:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807D07F0 func_807D07F0 preserves=true fpr_mask=0x00000000
