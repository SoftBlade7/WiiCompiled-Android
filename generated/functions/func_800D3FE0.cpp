#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800D3FE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_800D3FE0;

loc_800D3FE0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r3 = MemoryInline::FlatRead32((r13 + -26896));
}

loc_800D3FF8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_800D4038;
    }
}

loc_800D3FFC:
{
    r0 = MemoryInline::FlatRead32((r3 + 2684));
}

loc_800D4004:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D4038;
    }
}

loc_800D4008:
{
}

loc_800D400C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(8))) {
        goto loc_800D4038;
    }
}

loc_800D4010:
{
}

loc_800D4014:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_800D4038;
    }
}

loc_800D4018:
{
}

loc_800D401C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(10))) {
        goto loc_800D4038;
    }
}

loc_800D4020:
{
    r0 = MemoryInline::FlatRead8((r3 + 877));
}

loc_800D4028:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_800D4038;
    }
}

loc_800D402C:
{
    r0 = MemoryInline::FlatRead8((r3 + 886));
}

loc_800D4034:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_800D4040;
    }
}

loc_800D4038:
{
    r31 = 255;
    goto loc_800D404C;
}

loc_800D4040:
{
    r3 = 0;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl0_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_inl0_0x800E7E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl0_0x800E7E8C;
    }
}

loc_inl0_0x800E7E7C:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_inl0_cont_800E7E6C;
}

loc_inl0_0x800E7E8C:
{
    r3 = 0;
}

loc_inl0_cont_800E7E6C:
{
    // end of inlined leaf 0x800E7E6C
    r31 = MemoryInline::FlatRead8((r3 + 22));
}

loc_800D404C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r31), static_cast<uint32_t>(255));
}

loc_800D4050:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800D4068;
    }
}

loc_800D4054:
{
    r3 = 0;
    // inline leaf 0x800E7E6C (10 guest instruction(s))
}

loc_inl1_0x800E7E6C:
{
    r4 = MemoryInline::FlatRead32((r13 + -26868));
    r0 = MemoryInline::FlatRead32((r4 + 48));
}

loc_inl1_0x800E7E78:
{
    if ((static_cast<int32_t>(r3) >= static_cast<int32_t>(r0))) {
        goto loc_inl1_0x800E7E8C;
    }
}

loc_inl1_0x800E7E7C:
{
    r0 = (r3 * 48);
    r3 = (r4 + r0);
    r3 = (r3 + 56);
    goto loc_inl1_cont_800E7E6C;
}

loc_inl1_0x800E7E8C:
{
    r3 = 0;
}

loc_inl1_cont_800E7E6C:
{
    // end of inlined leaf 0x800E7E6C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_800D4060:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800D4068;
    }
}

loc_800D4064:
{
    r31 = MemoryInline::FlatRead8((r3 + 22));
}

loc_800D4068:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
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

// RECOMP_GUEST_ABI gpr_read=0x8000201B gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800D3FE0 func_800D3FE0 preserves=true fpr_mask=0x00000000
