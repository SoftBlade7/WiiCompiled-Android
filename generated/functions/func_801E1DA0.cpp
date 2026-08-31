#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801E1DA0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801E1DA0;

loc_801E1DA0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
}

loc_801E1DCC:
{
    r3 = r28;
    ctx->lr = 0x801E1DD4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801E1384u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_801E1DD8:
{
    if ((static_cast<uint32_t>(r30) != static_cast<uint32_t>(2))) {
        goto loc_801E1DF4;
    }
}

loc_801E1DDC:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    r29 = 0;
}

loc_801E1DE8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(9))) {
        goto loc_801E1DF4;
    }
}

loc_801E1DEC:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(32));
}

loc_801E1DF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801E1E38;
    }
}

loc_801E1DF4:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
}

loc_801E1DFC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(13))) {
        goto loc_801E1E08;
    }
}

loc_801E1E00:
{
    r30 = (r30 | 1);
    goto loc_801E1E20;
}

loc_801E1E08:
{
}

loc_801E1E0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(10))) {
        goto loc_801E1E18;
    }
}

loc_801E1E10:
{
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
    r30 = (r30_rot_2 & -2);
    goto loc_801E1E20;
}

loc_801E1E18:
{
    r30 = 0;
    r29 = (r29 + 1);
}

loc_801E1E20:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(1000));
}

loc_801E1E24:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801E1E30;
    }
}

loc_801E1E28:
{
    r31 = -1;
    goto loc_801E1E38;
}

loc_801E1E30:
{
    r31 = (r31 + 1);
    goto loc_801E1DCC;
}

loc_801E1E38:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801E1DA0 func_801E1DA0 preserves=true fpr_mask=0x00000000
