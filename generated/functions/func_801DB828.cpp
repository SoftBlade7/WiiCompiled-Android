#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801DB828(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801DB828;

loc_801DB828:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    ctx->lr = 0x801DB840u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = (r3 + 0);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(45057));
}

loc_801DB848:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB854;
    }
}

loc_801DB84C:
{
    r3 = -20;
    goto loc_801DB91C;
}

loc_801DB854:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB858:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB8B0;
    }
}

loc_801DB85C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB860:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB8A8;
    }
}

loc_801DB864:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB86Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB870:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB890;
    }
}

loc_801DB874:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB884;
    }
}

loc_801DB878:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB87C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB890;
    }
}

loc_801DB880:
{
    goto loc_801DB8A0;
}

loc_801DB884:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DB888:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB8A0;
    }
}

loc_801DB88C:
{
    goto loc_801DB898;
}

loc_801DB890:
{
    r3 = -46;
    goto loc_801DB91C;
}

loc_801DB898:
{
    r3 = -38;
    goto loc_801DB91C;
}

loc_801DB8A0:
{
    r3 = -43;
    goto loc_801DB91C;
}

loc_801DB8A8:
{
    r3 = -43;
    goto loc_801DB91C;
}

loc_801DB8B0:
{
    r3 = r31;
    r4 = 1;
    ctx->lr = 0x801DB8BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208CF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801DB8C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB918;
    }
}

loc_801DB8C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_801DB8C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801DB910;
    }
}

loc_801DB8CC:
{
    r3 = (r13 + -28280);
    ctx->lr = 0x801DB8D4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208B74u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r13 = ctx->gpr[13];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-5));
}

loc_801DB8D8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB8F8;
    }
}

loc_801DB8DC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB8EC;
    }
}

loc_801DB8E0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-15));
}

loc_801DB8E4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801DB8F8;
    }
}

loc_801DB8E8:
{
    goto loc_801DB908;
}

loc_801DB8EC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(-3));
}

loc_801DB8F0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801DB908;
    }
}

loc_801DB8F4:
{
    goto loc_801DB900;
}

loc_801DB8F8:
{
    r3 = -46;
    goto loc_801DB91C;
}

loc_801DB900:
{
    r3 = -38;
    goto loc_801DB91C;
}

loc_801DB908:
{
    r3 = -43;
    goto loc_801DB91C;
}

loc_801DB910:
{
    r3 = -43;
    goto loc_801DB91C;
}

loc_801DB918:
{
    r3 = 0;
}

loc_801DB91C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801DB828 func_801DB828 preserves=true fpr_mask=0x00000000
