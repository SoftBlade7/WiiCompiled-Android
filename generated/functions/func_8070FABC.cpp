#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8070FABC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8070FABC;

loc_8070FABC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r31 = MemoryInline::FlatRead32((r3 + 10224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8070FADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FBA8;
    }
}

loc_8070FAE0:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 10224), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FBA8;
    }
}

loc_8070FAEC:
{
    r3 = (r31 + 28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31)) + static_cast<uint64_t>(static_cast<uint32_t>(28)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FAF0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FAF8;
    }
}

loc_8070FAF4:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A2E80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8070FAF8:
{
    r3 = (r31 + 24);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r31)) + static_cast<uint64_t>(static_cast<uint32_t>(24)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FAFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB04;
    }
}

loc_8070FB00:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A2E80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8070FB04:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8070FB08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FBA0;
    }
}

loc_8070FB0C:
{
    r4 = 0x808D0000u;
    r3 = 0x809C0000u;
    r4 = (r4 + -28768);
    MemoryInline::FlatWrite32(r31, r4);
    r30 = MemoryInline::FlatRead32((r3 + 10224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070FB24:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB94;
    }
}

loc_8070FB28:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r3 + 10224), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB94;
    }
}

loc_8070FB34:
{
    r3 = (r30 + 28);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(28)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FB38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB40;
    }
}

loc_8070FB3C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A2E80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8070FB40:
{
    r3 = (r30 + 24);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r30)) + static_cast<uint64_t>(static_cast<uint32_t>(24)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FB44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB4C;
    }
}

loc_8070FB48:
{
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x800A2E80u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8070FB4C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8070FB50:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB8C;
    }
}

loc_8070FB54:
{
    r3 = 0x808D0000u;
    r4 = 0x809C0000u;
    r3 = (r3 + -28768);
    MemoryInline::FlatWrite32(r30, r3);
    r3 = MemoryInline::FlatRead32((r4 + 10224));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8070FB6C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8070FB80;
    }
}

loc_8070FB70:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r4 + 10224), r0);
    r4 = 1;
    ctx->lr = 0x8070FB80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8070FBC0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070FB80:
{
    r3 = r30;
    r4 = 0;
    ctx->lr = 0x8070FB8Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8021A144u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070FB8C:
{
    r3 = r30;
    ctx->lr = 0x8070FB94u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070FB94:
{
    r3 = r31;
    r4 = 0;
    ctx->lr = 0x8070FBA0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8021A144u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070FBA0:
{
    r3 = r31;
    ctx->lr = 0x8070FBA8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80229E14u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_8070FBA8:
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
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8070FABC func_8070FABC preserves=true fpr_mask=0x00000000
