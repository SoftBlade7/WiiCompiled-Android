#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001EDF4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_addr_3 = 0;
    uint32_t r3_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001EDF4;

loc_8001EDF4:
{
    MemoryInline::FlatWriteRam32((r1 + -2272), r1);
    r1 = (r1 + -2272);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 2276), r0);
    MemoryInline::FlatWriteRam32((r1 + 2268), r31);
    ctx->lr = 0x8001EE08u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001C8ECu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001EE0C:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_8001EE18;
    }
}

loc_8001EE10:
{
    r3 = -1;
    goto loc_8001EEAC;
}

loc_8001EE18:
{
    r3 = (r1 + 12);
    r4 = (r1 + 8);
    ctx->lr = 0x8001EE24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001D17Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = 0;
    // inline leaf 0x8001D28C (12 guest instruction(s))
}

loc_inl0_0x8001D28C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(2176));
}

loc_inl0_0x8001D290:
{
    r5 = 0;
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8001D2A0;
    }
}

loc_inl0_0x8001D298:
{
    r5 = 769;
    goto loc_inl0_0x8001D2B4;
}

loc_inl0_0x8001D2A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    MemoryInline::FlatWrite32((r3 + 8), r4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_inl0_0x8001D2AC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl0_0x8001D2B4;
    }
}

loc_inl0_0x8001D2B0:
{
    MemoryInline::FlatWrite32((r3 + 4), r4);
}

loc_inl0_0x8001D2B4:
{
    r3 = r5;
}

loc_inl0_cont_8001D28C:
{
    // end of inlined leaf 0x8001D28C
    r3 = (r1 + 16);
    r4 = 64;
    ctx->lr = 0x8001EE40u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001C900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001EE44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EE9C;
    }
}

loc_8001EE48:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 16);
    r5 = 64;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r3 = MemoryInline::FlatRead32((r1 + 16));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r4 = (r3 + -64);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-64)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8001EE64:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8001EEA8;
    }
}

loc_8001EE68:
{
    r3 = (r1 + 80);
    ctx->lr = 0x8001EE70u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001C900u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001EE74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EE8C;
    }
}

loc_8001EE78:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    r4 = (r1 + 80);
    r5 = MemoryInline::FlatRead32((r1 + 16));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001D5B4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    goto loc_8001EEA8;
}

loc_8001EE8C:
{
    r3 = r31;
    // inline leaf 0x8001D23C (10 guest instruction(s))
}

loc_inl1_0x8001D23C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-1));
}

loc_inl1_0x8001D240:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8001D244:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
}

loc_inl1_0x8001D248:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x8001D24C:
{
    r0 = (r3 * 2188);
    r3 = 0x802A0000u;
    r4 = 0;
    r3 = (r3 + 18936);
    r3_addr_1 = (r3 + r0);
    MemoryInline::FlatWrite32(r3_addr_1, r4);
    goto loc_inl1_cont_8001D23C;
}

loc_inl1_return:
{
}

loc_inl1_cont_8001D23C:
{
    // end of inlined leaf 0x8001D23C
    r31 = -1;
    goto loc_8001EEA8;
}

loc_8001EE9C:
{
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x8001D23Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    r31 = -1;
}

loc_8001EEA8:
{
    r3 = r31;
}

loc_8001EEAC:
{
    r0 = MemoryInline::FlatRead32((r1 + 2276));
    r31 = MemoryInline::FlatRead32((r1 + 2268));
    ctx->lr = r0;
    r1 = (r1 + 2272);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFEFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8001EDF4 func_8001EDF4 preserves=true fpr_mask=0x00000000
