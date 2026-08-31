#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80035EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;
    uint32_t r4_addr_3 = 0;
    uint32_t r4_addr_4 = 0;
    uint32_t r4_addr_5 = 0;
    uint32_t r4_addr_6 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80035EB0;

loc_80035EB0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80035EBC:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r5;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80035EF0;
    }
}

loc_80035EDC:
{
    r3 = r31;
    ctx->lr = 0x80035EE4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035AC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80035EE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80035EF0;
    }
}

loc_80035EEC:
{
    goto loc_80035F38;
}

loc_80035EF0:
{
    r3 = r29;
    r4 = 0;
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl0_0x800AF1A0:
{
}

loc_inl0_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x800AF1B0;
    }
}

loc_inl0_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl0_cont_800AF1A0;
}

loc_inl0_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
}

loc_inl0_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r31 = r3;
    goto loc_80035F2C;
}

loc_80035F04:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x80035F10u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80035AC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80035F14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80035F1C;
    }
}

loc_80035F18:
{
    goto loc_80035F38;
}

loc_80035F1C:
{
    r3 = r29;
    r4 = r31;
    // inline leaf 0x800AF1A0 (7 guest instruction(s))
}

loc_inl1_0x800AF1A0:
{
}

loc_inl1_0x800AF1A4:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl1_0x800AF1B0;
    }
}

loc_inl1_0x800AF1A8:
{
    r3 = MemoryInline::FlatRead32((r3 + 4));
    goto loc_inl1_cont_800AF1A0;
}

loc_inl1_0x800AF1B0:
{
    r0 = MemoryInline::FlatRead16((r3 + 10));
    r4_addr_4 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_4);
}

loc_inl1_cont_800AF1A0:
{
    // end of inlined leaf 0x800AF1A0
    r31 = r3;
}

loc_80035F2C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80035F30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80035F04;
    }
}

loc_80035F34:
{
    r3 = 0;
}

loc_80035F38:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFC0001FB gpr_write=0xFC0009FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80035EB0 func_80035EB0 preserves=true fpr_mask=0x00000000
