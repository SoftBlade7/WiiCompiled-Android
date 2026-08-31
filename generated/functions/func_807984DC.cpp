#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807984DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_807984DC;

loc_807984DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808A0000u;
    r31 = (r31 + 20864);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    // inline leaf 0x805903F4 (10 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10448));
    r3 = MemoryInline::FlatRead32(r3);
    r4 = MemoryInline::FlatRead32((r4 + 12));
    r0 = MemoryInline::FlatRead8((r3 + 16));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r4_addr_0 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_0);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    // end of inlined leaf 0x805903F4
    f1.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 32));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079850C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80798520;
    }
}

loc_80798510:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 | 16);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    goto loc_80798538;
}

loc_80798520:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 36));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80798528:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798538;
    }
}

loc_8079852C:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 & -17);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
}

loc_80798538:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 40));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80798540:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80798554;
    }
}

loc_80798544:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 | 32);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
    goto loc_8079856C;
}

loc_80798554:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 44));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8079855C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8079856C;
    }
}

loc_80798560:
{
    r0 = MemoryInline::FlatRead16((r30 + 12));
    r0 = (r0 & -33);
    MemoryInline::FlatWrite16((r30 + 12), static_cast<uint16_t>(r0));
}

loc_8079856C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000000B gpr_write=0xC000001B gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807984DC func_807984DC preserves=true fpr_mask=0x00000000
