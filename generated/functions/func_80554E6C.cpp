#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80554E6C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80554E6C;

loc_80554E6C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead8((r3 + 9536));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80554E80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80554EEC;
    }
}

loc_80554E84:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 6560));
}

loc_80554E90:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554E9C;
    }
}

loc_80554E94:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 6560), static_cast<uint8_t>(r0));
}

loc_80554E9C:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    r0 = (r0 & 1);
}

loc_80554EA8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554EB8;
    }
}

loc_80554EAC:
{
    r0 = MemoryInline::FlatRead32((r3 + 6260));
    r0 = (r0 | 1);
    MemoryInline::FlatWriteRam32((r3 + 6260), r0);
}

loc_80554EB8:
{
    // inline leaf 0x8078DDB4 (12 guest instruction(s))
}

loc_inl0_0x8078DDB4:
{
    r4 = 0x809C0000u;
    r3 = 0;
    r0 = MemoryInline::FlatRead8((r4 + 12092));
}

loc_inl0_0x8078DDC4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x8078DDDC;
    }
}

loc_inl0_0x8078DDC8:
{
    r4 = 0x809C0000u;
    r4 = MemoryInline::FlatRead32((r4 + -10504));
    r0 = MemoryInline::FlatRead8((r4 + 76));
}

loc_inl0_0x8078DDD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x8078DDDC:
{
    r3 = 1;
    goto loc_inl0_cont_8078DDB4;
}

loc_inl0_return:
{
}

loc_inl0_cont_8078DDB4:
{
    // end of inlined leaf 0x8078DDB4
}

loc_80554EC0:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80554ED0;
    }
}

loc_80554EC4:
{
    r3 = 0x809C0000u;
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 12092), static_cast<uint8_t>(r0));
}

loc_80554ED0:
{
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 8664));
}

loc_80554EDC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80554EF0;
    }
}

loc_80554EE0:
{
    r0 = 1;
    MemoryInline::FlatWriteRam8((r3 + 8664), static_cast<uint8_t>(r0));
    goto loc_80554EF0;
}

loc_80554EEC:
{
    ctx->lr = 0x80554EF0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80554AD4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80554EF0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10504));
    r0 = MemoryInline::FlatRead8((r3 + 76));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80554F00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80554F4C;
    }
}

loc_80554F04:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead8((r3 + 45));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80554F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80554F24;
    }
}

loc_80554F18:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    ctx->lr = 0x80554F24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x8063550Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80554F24:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + -10448));
    r0 = MemoryInline::FlatRead8((r3 + 45));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80554F34:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80554F4C;
    }
}

loc_80554F38:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 18796));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80554F44:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80554F4C;
    }
}

loc_80554F48:
{
    ctx->lr = 0x80554F4Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80882B58u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80554F4C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8016));
    ctx->lr = 0x80554F58u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80653728u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80554E6C func_80554E6C preserves=true fpr_mask=0x00000000
