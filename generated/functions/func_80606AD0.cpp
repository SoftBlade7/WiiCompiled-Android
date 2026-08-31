#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80606AD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80606AD0;

loc_80606AD0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r3 = MemoryInline::FlatRead32((r3 + 100));
    r30 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80606AF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80606AFC;
    }
}

loc_80606AF4:
{
    r30 = 0;
    goto loc_80606B50;
}

loc_80606AFC:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7812);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80606B4C;
    }
}

loc_80606B08:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80606B1Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80606B34;
}

loc_80606B20:
{
}

loc_80606B24:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_80606B30;
    }
}

loc_80606B28:
{
    r0 = 1;
    goto loc_80606B40;
}

loc_80606B30:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80606B34:
{
}

loc_80606B38:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80606B20;
    }
}

loc_80606B3C:
{
    r0 = 0;
}

loc_80606B40:
{
}

loc_80606B44:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80606B4C;
    }
}

loc_80606B48:
{
    goto loc_80606B50;
}

loc_80606B4C:
{
    r30 = 0;
}

loc_80606B50:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80606B54:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80606B60;
    }
}

loc_80606B58:
{
    r30 = 0;
    goto loc_80606BB4;
}

loc_80606B60:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 7472);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80606BB0;
    }
}

loc_80606B6C:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 40));
    ctr = r12;
    ctx->lr = 0x80606B80u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_80606B98;
}

loc_80606B84:
{
}

loc_80606B88:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_80606B94;
    }
}

loc_80606B8C:
{
    r0 = 1;
    goto loc_80606BA4;
}

loc_80606B94:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_80606B98:
{
}

loc_80606B9C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80606B84;
    }
}

loc_80606BA0:
{
    r0 = 0;
}

loc_80606BA4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80606BA8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80606BB0;
    }
}

loc_80606BAC:
{
    goto loc_80606BB4;
}

loc_80606BB0:
{
    r30 = 0;
}

loc_80606BB4:
{
    r3 = r30;
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80606AD0 func_80606AD0 preserves=true fpr_mask=0x00000000
