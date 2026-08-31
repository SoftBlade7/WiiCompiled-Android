#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8013EB18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8013EB18;

loc_8013EB18:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80330000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 25208);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = 0;
    MemoryInline::FlatWriteRam16((r5 + 6390), static_cast<uint16_t>(r4));
    r0 = MemoryInline::FlatRead16((r5 + 6236));
}

loc_8013EB44:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8013EB58;
    }
}

loc_8013EB48:
{
}

loc_8013EB4C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8013EB54;
    }
}

loc_8013EB50:
{
    goto loc_8013EB58;
}

loc_8013EB54:
{
    r3 = 1;
}

loc_8013EB58:
{
    r0 = MemoryInline::FlatRead16((r5 + 6288));
}

loc_8013EB60:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8013EB74;
    }
}

loc_8013EB64:
{
}

loc_8013EB68:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8013EB70;
    }
}

loc_8013EB6C:
{
    goto loc_8013EB74;
}

loc_8013EB70:
{
    r3 = (r3 + 1);
}

loc_8013EB74:
{
    r0 = MemoryInline::FlatRead16((r5 + 6340));
}

loc_8013EB7C:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(7))) {
        goto loc_8013EB90;
    }
}

loc_8013EB80:
{
}

loc_8013EB84:
{
    if ((static_cast<int32_t>(r0) >= static_cast<int32_t>(2))) {
        goto loc_8013EB8C;
    }
}

loc_8013EB88:
{
    goto loc_8013EB90;
}

loc_8013EB8C:
{
    r3 = (r3 + 1);
}

loc_8013EB90:
{
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8013EB98:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8013EBA4;
    }
}

loc_8013EB9C:
{
    r3 = 0;
    ctx->lr = 0x8013EBA4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80139780u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8013EBA4:
{
    r3 = 0x80330000u;
    r0 = 3;
    r3 = (r3 + 25208);
    r6 = 0;
    r5 = (r3 + 6228);
    ctr = r0;
}

loc_8013EBBC:
{
    r0 = MemoryInline::FlatRead16((r5 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8013EBC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013EC0C;
    }
}

loc_8013EBC8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8013EBCC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8013EC0C;
    }
}

loc_8013EBD0:
{
    r0 = MemoryInline::FlatRead16((r5 + 10));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(r31));
}

loc_8013EBD8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8013EC0C;
    }
}

loc_8013EBDC:
{
    r4 = 0;
    r3 = 65536;
    MemoryInline::FlatWrite16((r5 + 8), static_cast<uint16_t>(r4));
    r0 = (r3 + -1);
    r3 = (r6 & 65535);
    MemoryInline::FlatWrite16((r5 + 10), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite8((r5 + 13), static_cast<uint8_t>(r4));
    MemoryInline::FlatWrite32((r5 + 16), r4);
    r12 = MemoryInline::FlatRead32((r5 + 4));
    ctr = r12;
    ctx->lr = 0x8013EC08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r12 = ctx->gpr[12];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8013EC18;
}

loc_8013EC0C:
{
    r6 = (r6 + 1);
    r5 = (r5 + 52);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8013EBBC;
    }
}

loc_8013EC18:
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
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8013EB18 func_8013EB18 preserves=true fpr_mask=0x00000000
