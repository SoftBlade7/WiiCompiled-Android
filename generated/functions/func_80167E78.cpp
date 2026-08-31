#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80167E78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_addr_0 = 0;
    uint32_t r4_addr_1 = 0;
    uint32_t r4_addr_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80167E78;

loc_80167E78:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r4;
    r5 = 0x80340000u;
    r5 = (r5 + 13952);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_80167E98:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167EF4;
    }
}

loc_80167E9C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80167EAC;
    }
}

loc_80167EA0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80167EA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80167EB8;
    }
}

loc_80167EA8:
{
    goto loc_80167F54;
}

loc_80167EAC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(3));
}

loc_80167EB0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80167F54;
    }
}

loc_80167EB4:
{
    goto loc_80167F24;
}

loc_80167EB8:
{
    r0 = MemoryInline::FlatRead32(r4);
}

loc_80167EC0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80167ED0;
    }
}

loc_80167EC4:
{
    r0 = MemoryInline::FlatRead32((r5 + 128));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167ECC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167EDC;
    }
}

loc_80167ED0:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167ED8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167EE8;
    }
}

loc_80167EDC:
{
    r3 = 4259840;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A693Cu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80167F54;
}

loc_80167EE8:
{
    r3 = 4259840;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80167F54;
}

loc_80167EF4:
{
    r0 = MemoryInline::FlatRead32(r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167EFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167F0C;
    }
}

loc_80167F00:
{
    r0 = MemoryInline::FlatRead32((r4 + 12));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167F08:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167F18;
    }
}

loc_80167F0C:
{
    r3 = 524288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A693Cu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80167F54;
}

loc_80167F18:
{
    r3 = 524288;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80167F54;
}

loc_80167F24:
{
    r3 = 25;
    // inline leaf 0x801A660C (4 guest instruction(s))
    r4 = MemoryInline::FlatRead32((r13 + -25352));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_1 & -4);
    r4_addr_1 = (r4 + r0);
    r3 = MemoryInline::FlatRead32(r4_addr_1);
    // end of inlined leaf 0x801A660C
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80167F30:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167F40;
    }
}

loc_80167F34:
{
    r0 = MemoryInline::FlatRead32((r31 + 12));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80167F3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80167F4C;
    }
}

loc_80167F40:
{
    r3 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x801A693Cu>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80167F54;
}

loc_80167F4C:
{
    r3 = 64;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A69BCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_80167F54:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000203B gpr_write=0x8000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80167E78 func_80167E78 preserves=true fpr_mask=0x00000000
