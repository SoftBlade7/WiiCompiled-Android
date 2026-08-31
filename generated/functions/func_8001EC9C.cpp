#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001EC9C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001EC9C;

loc_8001EC9C:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl0_0x8001D23C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_inl0_0x8001D240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8001D244:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_inl0_0x8001D248:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_0 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_0, r4);
    goto loc_inl0_cont_8001D23C;
}

loc_inl0_return:
{
}

loc_inl0_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x00 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001EC9C func_8001EC9C preserves=true fpr_mask=0x00000000
