#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80063E40(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80063E40;

loc_80063E40:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(31));
}

loc_80063E50:
{
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 8), r3);
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80063EC4;
    }
}

loc_80063E68:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80063E6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063EC4;
    }
}

loc_80063E70:
{
    r31 = 0x802C0000u;
    r6 = (r31 + -30080);
    r0 = MemoryInline::FlatRead32((r6 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(r4));
}

loc_80063E80:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80063EA8;
    }
}

loc_80063E84:
{
    r0 = (r4 * 48);
    r5 = 48;
    r4 = (r6 + r0);
    r4 = (r4 + 8);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x8000F314u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80063E9C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80063EC4;
    }
}

loc_80063EA0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r31 + -30080), r0);
}

loc_80063EA8:
{
    r0 = (r30 * 48);
    r4 = 0x802C0000u;
    r3 = (r1 + 8);
    r4 = (r4 + -30080);
    r4 = (r4 + r0);
    r4 = (r4 + 8);
    // inline leaf 0x80077550 (21 guest instruction(s))
}

loc_inl0_0x80077550:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_inl0_0x80077554:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8007759C;
    }
}

loc_inl0_0x80077558:
{
    r5 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_inl0_0x80077560:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl0_0x8007759C;
    }
}

loc_inl0_0x80077564:
{
    f0.d = MemoryInline::FlatReadFloat64(r5);
    r3 = r4;
    MemoryInline::FlatWriteFloat64(r4, f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 8));
    MemoryInline::FlatWriteFloat64((r4 + 8), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 16));
    MemoryInline::FlatWriteFloat64((r4 + 16), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 24));
    MemoryInline::FlatWriteFloat64((r4 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 32));
    MemoryInline::FlatWriteFloat64((r4 + 32), f0.d);
    f0.d = MemoryInline::FlatReadFloat64((r5 + 40));
    MemoryInline::FlatWriteFloat64((r4 + 40), f0.d);
    goto loc_inl0_cont_80077550;
}

loc_inl0_0x8007759C:
{
    r3 = 0;
}

loc_inl0_cont_80077550:
{
    // end of inlined leaf 0x80077550
}

loc_80063EC4:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC00000FB gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80063E40 func_80063E40 preserves=true fpr_mask=0x00000000
