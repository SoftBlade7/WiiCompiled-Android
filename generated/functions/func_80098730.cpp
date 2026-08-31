#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80098730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80098730;

loc_80098730:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->lr = 0x80098754u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800989D0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r4 = r29;
    // inline leaf 0x80098A70 (4 guest instruction(s))
    r0 = (r4 * 168);
    r3 = (r3 + r0);
    r3 = (r3 + 56);
    // end of inlined leaf 0x80098A70
}

loc_80098760:
{
    r31 = r3;
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(0))) {
        goto loc_80098784;
    }
}

loc_80098768:
{
}

loc_8009876C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-2))) {
        goto loc_80098790;
    }
}

loc_80098770:
{
}

loc_80098774:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-3))) {
        goto loc_8009879C;
    }
}

loc_80098778:
{
}

loc_8009877C:
{
    if ((static_cast<int32_t>(r30) == static_cast<int32_t>(-1))) {
        goto loc_800987A8;
    }
}

loc_80098780:
{
    goto loc_800987B4;
}

loc_80098784:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_800987BC;
}

loc_80098790:
{
    r0 = 2;
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_800987BC;
}

loc_8009879C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_800987BC;
}

loc_800987A8:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
    goto loc_800987BC;
}

loc_800987B4:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 8), r0);
}

loc_800987BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(-2));
}

loc_800987C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800987F4;
    }
}

loc_800987C4:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_800987CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800987F4;
    }
}

loc_800987D0:
{
    r12 = MemoryInline::FlatRead32((r3 + 56));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r12), static_cast<int32_t>(0));
}

loc_800987D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_800987F4;
    }
}

loc_800987DC:
{
    r3 = r29;
    r4 = r30;
    ctr = r12;
    ctx->lr = 0x800987ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_800987F4:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r31 + 5), static_cast<uint8_t>(r0));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80098730 func_80098730 preserves=true fpr_mask=0x00000000
