#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80057080(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80057080;

loc_80057080:
{
    r4 = 65536;
    r7 = 0;
    r5 = (r4 + -32768);
    r6 = 0;
    goto loc_800570A8;
}

loc_80057098:
{
    r4 = MemoryInline::FlatRead32((r3 + 20));
    r7 = (r7 + 1);
    r4_addr_2 = (r4 + r6);
    MemoryInline::FlatWrite16(r4_addr_2, static_cast<uint16_t>(r5));
    r6 = (r6 + 2);
}

loc_800570A8:
{
    r0 = MemoryInline::FlatRead32((r3 + 16));
}

loc_800570B0:
{
    if ((static_cast<int32_t>(r7) < static_cast<int32_t>(r0))) {
        goto loc_80057098;
    }
}

loc_800570B4:
{
    r4 = 4;
    r5 = 0;
    // inline leaf 0x80060570 (10 guest instruction(s))
}

loc_inl0_0x80060570:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl0_0x80060574:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x80060588;
    }
}

loc_inl0_0x80060578:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 | r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
    goto loc_inl0_cont_80060570;
}

loc_inl0_0x80060588:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & ~r4);
    MemoryInline::FlatWrite32((r3 + 12), r0);
}

loc_inl0_cont_80060570:
{
    // end of inlined leaf 0x80060570
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000000E9 gpr_write=0x000000F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80057080 func_80057080 preserves=true fpr_mask=0x00000000
