#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8060C0DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8060C0DC;

loc_8060C0DC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    r0 = MemoryInline::FlatRead32((r3 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_8060C100:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060C218;
    }
}

loc_8060C104:
{
    r0 = MemoryInline::FlatRead32((r3 + 84));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8060C10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060C218;
    }
}

loc_8060C110:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_8060C120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C218;
    }
}

loc_8060C124:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32(r3);
    r30 = MemoryInline::FlatRead32((r3 + 328));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8060C138:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8060C144;
    }
}

loc_8060C13C:
{
    r30 = 0;
    goto loc_8060C198;
}

loc_8060C144:
{
    r31 = 0x809C0000u;
    r31 = (r31 + 6992);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C194;
    }
}

loc_8060C150:
{
    r12 = MemoryInline::FlatRead32(r30);
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 96));
    ctr = r12;
    ctx->lr = 0x8060C164u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    goto loc_8060C17C;
}

loc_8060C168:
{
}

loc_8060C16C:
{
    if ((static_cast<uint32_t>(r3) != static_cast<uint32_t>(r31))) {
        goto loc_8060C178;
    }
}

loc_8060C170:
{
    r0 = 1;
    goto loc_8060C188;
}

loc_8060C178:
{
    r3 = MemoryInline::FlatRead32(r3);
}

loc_8060C17C:
{
}

loc_8060C180:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8060C168;
    }
}

loc_8060C184:
{
    r0 = 0;
}

loc_8060C188:
{
}

loc_8060C18C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8060C194;
    }
}

loc_8060C190:
{
    goto loc_8060C198;
}

loc_8060C194:
{
    r30 = 0;
}

loc_8060C198:
{
    r3 = r30;
    // inline leaf 0x805BAC84 (3 guest instruction(s))
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 84), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x805BAC84
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    r0 = (r3 + -3);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8060C1B4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8060C204;
    }
}

loc_8060C1B8:
{
}

loc_8060C1BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_8060C1CC;
    }
}

loc_8060C1C0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(5));
}

loc_8060C1C4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C210;
    }
}

loc_8060C1C8:
{
    goto loc_8060C218;
}

loc_8060C1CC:
{
    r0 = MemoryInline::FlatRead32((r29 + 1140));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8060C1D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C1E4;
    }
}

loc_8060C1D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_8060C1DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8060C1F0;
    }
}

loc_8060C1E0:
{
    goto loc_8060C1F8;
}

loc_8060C1E4:
{
    r3 = r29;
    ctx->lr = 0x8060C1ECu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8060C7A4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    goto loc_8060C1F8;
}

loc_8060C1F0:
{
    r3 = r29;
    ctx->lr = 0x8060C1F8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8060CBBCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r12 = ctx->gpr[12];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_8060C1F8:
{
    r0 = 3;
    MemoryInline::FlatWrite32((r29 + 84), r0);
    goto loc_8060C218;
}

loc_8060C204:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r29 + 84), r0);
    goto loc_8060C218;
}

loc_8060C210:
{
    r0 = 4;
    MemoryInline::FlatWrite32((r29 + 84), r0);
}

loc_8060C218:
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
    ctx->gpr[12] = r12;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8060C0DC func_8060C0DC preserves=true fpr_mask=0x00000000
