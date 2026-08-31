#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80798584(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_subfc_min_0 = 0;
    uint32_t r3_adde_right_0 = 0;
    uint32_t r3_ca_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80798584;

loc_80798584:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r4 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r4 + -10448));
    r4 = 2;
    // inline leaf 0x80536230 (6 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 40));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_0 & 1);
    r5 = (static_cast<int32_t>(r0) >> 31);
    r0_subfc_min_0 = r0;
    r0 = (r0_subfc_min_0 - r4);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(r0_subfc_min_0) >= static_cast<uint32_t>(r4) ? 1u : 0u) << 29);
    r3_adde_right_0 = r3;
    r3_ca_0 = (xer >> 29) & 1u;
    r3 = (r5 + r3_adde_right_0);
    r3 = (r3 + r3_ca_0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5)) + static_cast<uint64_t>(static_cast<uint32_t>(r3_adde_right_0)) + (static_cast<uint64_t>(static_cast<uint32_t>(r3_ca_0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    // end of inlined leaf 0x80536230
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_807985AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_807985B8;
    }
}

loc_807985B0:
{
    r3 = 0;
    goto loc_80798638;
}

loc_807985B8:
{
    r3 = MemoryInline::FlatRead32(r31);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r3 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807985C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807985D4;
    }
}

loc_807985CC:
{
    r3 = 0;
    goto loc_80798638;
}

loc_807985D4:
{
    r0 = (r3 & 262144);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807985D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_807985E4;
    }
}

loc_807985DC:
{
    r3 = 0;
    goto loc_80798638;
}

loc_807985E4:
{
    r0 = MemoryInline::FlatRead32((r31 + 200));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(16));
}

loc_807985EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798600;
    }
}

loc_807985F0:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_80798634;
}

loc_80798600:
{
    r0 = MemoryInline::FlatRead32((r31 + 140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(20));
}

loc_80798608:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8079861C;
    }
}

loc_8079860C:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
    goto loc_80798634;
}

loc_8079861C:
{
    r0 = MemoryInline::FlatRead32((r31 + 88));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80798624:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80798634;
    }
}

loc_80798628:
{
    r0 = MemoryInline::FlatRead16((r31 + 12));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite16((r31 + 12), static_cast<uint16_t>(r0));
}

loc_80798634:
{
    r3 = 1;
}

loc_80798638:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80798584 func_80798584 preserves=true fpr_mask=0x00000000
