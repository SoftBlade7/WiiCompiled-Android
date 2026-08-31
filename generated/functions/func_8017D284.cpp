#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8017D284(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8017D284;

loc_8017D284:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8017D288:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017DBD4;
    }
}

loc_8017D28C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_8017D290:
{
    r4 = 1;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8017D2B8;
    }
}

loc_8017D298:
{
    r3 = MemoryInline::FlatRead32((r30 + 1020));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D2A4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_8017D2B8;
    }
}

loc_8017D2A8:
{
    r3 = MemoryInline::FlatRead32((r30 + 984));
    r0 = MemoryInline::FlatRead32((r3 + 20));
}

loc_8017D2B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_8017D2BC;
    }
}

loc_8017D2B8:
{
    r4 = 0;
}

loc_8017D2BC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8017D2C0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8017D2EC;
    }
}

loc_8017D2C4:
{
    r31 = MemoryInline::FlatRead32((r30 + 1020));
    r3 = r31;
    // inline leaf 0x80173E40 (8 guest instruction(s))
}

loc_inl0_0x80173E40:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_inl0_0x80173E48:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_inl0_0x80173E54;
    }
}

loc_inl0_0x80173E4C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_inl0_0x80173E58;
}

loc_inl0_0x80173E54:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
}

loc_inl0_0x80173E58:
{
    MemoryInline::FlatWriteFloat32((r3 + 12), f0.d);
}

loc_inl0_cont_80173E40:
{
    // end of inlined leaf 0x80173E40
    r0 = 1;
    r3 = 12;
    MemoryInline::FlatWrite32((r31 + 20), r0);
    r0 = 0;
    MemoryInline::FlatWrite32((r30 + 112), r3);
    MemoryInline::FlatWrite32((r30 + 104), r0);
    goto loc_8017DBD4;
}

loc_8017D2EC:
{
    r0 = 12;
    MemoryInline::FlatWrite32((r30 + 104), r0);
}

loc_8017DBD4:
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
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003B gpr_write=0xE000001B gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8017D284 func_8017D284 preserves=true fpr_mask=0x00000000
