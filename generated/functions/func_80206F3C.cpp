#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80206F3C(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_80206F3C;

loc_80206F3C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = (static_cast<int32_t>(static_cast<int8_t>(r3)));
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    // inline leaf 0x801EF3C0 (6 guest instruction(s))
}

loc_inl0_0x801EF3C0:
{
}

loc_inl0_0x801EF3C4:
{
    if ((static_cast<int32_t>(r3) < static_cast<int32_t>(97))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3C8:
{
}

loc_inl0_0x801EF3CC:
{
    if ((static_cast<int32_t>(r3) > static_cast<int32_t>(122))) {
        goto loc_inl0_return;
    }
}

loc_inl0_0x801EF3D0:
{
    r3 = (r3 + -32);
    goto loc_inl0_cont_801EF3C0;
}

loc_inl0_return:
{
}

loc_inl0_cont_801EF3C0:
{
    // end of inlined leaf 0x801EF3C0
    r0 = (r3 + -65);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(0))) {
        goto loc_80206F70;
    }
}

loc_80206F68:
{
}

loc_80206F6C:
{
    if ((static_cast<int32_t>(r0) < static_cast<int32_t>(26))) {
        goto loc_80206F78;
    }
}

loc_80206F70:
{
    r31 = 0;
    goto loc_80206F8C;
}

loc_80206F78:
{
    r0 = (r0 * 6272);
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    r3 = (r3 + r0);
    r31 = (r3 + 72);
}

loc_80206F8C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80206F90:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206FAC;
    }
}

loc_80206F94:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_8020708C;
}

loc_80206FAC:
{
    r0 = MemoryInline::FlatRead16((r31 + 6240));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80206FB4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80206FD4;
    }
}

loc_80206FB8:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_8020708C;
}

loc_80206FD4:
{
    r3 = r31;
    ctx->lr = 0x80206FDCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F0218u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80206FE0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207000;
    }
}

loc_80206FE4:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_8020708C;
}

loc_80207000:
{
    r0 = MemoryInline::FlatRead32((r31 + 5576));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207008:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020701C;
    }
}

loc_8020700C:
{
    r3 = r31;
    ctx->lr = 0x80207014u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80201328u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r31;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6188u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8020701C:
{
    r0 = MemoryInline::FlatRead32((r31 + 5580));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80207024:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207030;
    }
}

loc_80207028:
{
    r3 = r31;
    ctx->lr = 0x80207030u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x801F6B40u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
}

loc_80207030:
{
    r3 = r31;
    r4 = r30;
    ctx->lr = 0x8020703Cu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80205970u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80207040:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80207058;
    }
}

loc_80207044:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    goto loc_8020708C;
}

loc_80207058:
{
    r0 = MemoryInline::FlatRead16((r31 + 6244));
    r0 = (r0 | 4);
    MemoryInline::FlatWrite16((r31 + 6244), static_cast<uint16_t>(r0));
    r0 = MemoryInline::FlatRead32((r31 + 28));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8020706C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80207080;
    }
}

loc_80207070:
{
    r3 = MemoryInline::FlatRead32((r31 + 52));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 56), r0);
    goto loc_80207088;
}

loc_80207080:
{
    r0 = MemoryInline::FlatRead32((r31 + 52));
    MemoryInline::FlatWrite32((r31 + 56), r0);
}

loc_80207088:
{
    r3 = 0;
}

loc_8020708C:
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
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80206F3C func_80206F3C preserves=true fpr_mask=0x00000000
