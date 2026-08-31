#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8057E0DC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mdest_1 = 0;
    uint32_t r0_mdest_2 = 0;
    uint32_t r0_mdest_3 = 0;
    uint32_t r0_mdest_4 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_mrot_1 = 0;
    uint32_t r0_mrot_2 = 0;
    uint32_t r0_mrot_3 = 0;
    uint32_t r0_mrot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8057E0DC;

loc_8057E0DC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = 0x808B0000u;
    r31 = (r31 + 22768);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r3;
    r5 = MemoryInline::FlatRead32(r3);
    r6 = MemoryInline::FlatRead32((r5 + 4));
    r0 = MemoryInline::FlatRead32((r6 + 20));
    r0 = (r0 & 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E10C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8057E330;
    }
}

loc_8057E110:
{
    r0 = MemoryInline::FlatRead32((r6 + 12));
    r0 = (r0 & 134217728);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8057E118:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8057E330;
    }
}

loc_8057E11C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 556));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 32));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057E130:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8057E18C;
    }
}

loc_8057E134:
{
    r4 = MemoryInline::FlatRead32((r6 + 8));
    r0 = (r4 & 268435456);
    r0_mrot_1 = (r4 & 1024);
    r0_mdest_1 = (r0 & -1025);
    r0 = (r0_mdest_1 | r0_mrot_1);
}

loc_8057E140:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E18C;
    }
}

loc_8057E144:
{
    r0 = MemoryInline::FlatRead32((r6 + 4));
    r0 = (r0 & 536870912);
}

loc_8057E14C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8057E18C;
    }
}

loc_8057E150:
{
    r4 = MemoryInline::FlatRead32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r31 + 184));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 136));
    f1.d = std::fabs(f1.d);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057E164:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057E18C;
    }
}

loc_8057E168:
{
    r4 = MemoryInline::FlatRead16((r3 + 460));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r5 = MemoryInline::FlatRead16((r31 + 204));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r4 = (r4 + 1);
    r0 = (static_cast<int32_t>(static_cast<int16_t>(r4)));
    MemoryInline::FlatWrite16((r3 + 460), static_cast<uint16_t>(r4));
}

loc_8057E180:
{
    if ((static_cast<int32_t>(r5) >= static_cast<int32_t>(r0))) {
        goto loc_8057E194;
    }
}

loc_8057E184:
{
    MemoryInline::FlatWrite16((r3 + 460), static_cast<uint16_t>(r5));
    goto loc_8057E194;
}

loc_8057E18C:
{
    r0 = 0;
    MemoryInline::FlatWrite16((r3 + 460), static_cast<uint16_t>(r0));
}

loc_8057E194:
{
    r4 = MemoryInline::FlatRead16((r3 + 460));
    r4 = (r4 << 16);
    r4 = (static_cast<int32_t>(r4) >> 16);
    r0 = MemoryInline::FlatRead16((r31 + 204));
    r0 = (r0 << 16);
    r0 = (static_cast<int32_t>(r0) >> 16);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(r0));
}

loc_8057E1A0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8057E288;
    }
}

loc_8057E1A4:
{
    r12 = MemoryInline::FlatRead32((r30 + 12));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 52));
    ctr = r12;
    ctx->lr = 0x8057E1B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
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
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 | 268435456);
    MemoryInline::FlatWrite32((r3 + 4), r0);
    r4 = MemoryInline::FlatRead32(r30);
    r3 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 136));
    r0 = (r0 & 262144);
}

loc_8057E1E4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8057E24C;
    }
}

loc_8057E1E8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057E1F4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E224;
    }
}

loc_8057E1F8:
{
    r0 = 1;
    MemoryInline::FlatWrite32((r30 + 204), r0);
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 456));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 456), f0.d);
    goto loc_8057E24C;
}

loc_8057E224:
{
    r0 = -1;
    MemoryInline::FlatWrite32((r30 + 204), r0);
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f2.d = MemoryInline::FlatReadFloat32((r3 + 92));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 200));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 456));
    f1.d = PpcFmulsInline(f1.d, f2.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    MemoryInline::FlatWriteFloat32((r30 + 456), f0.d);
}

loc_8057E24C:
{
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    f2.d = MemoryInline::FlatReadFloat32((r3 + 100));
    f1.d = MemoryInline::FlatReadFloat32((r31 + 196));
    f0.d = MemoryInline::FlatReadFloat32((r30 + 456));
    f2.d = PpcFmulsInline(f1.d, f2.d);
    f1.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8057E26C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057E278;
    }
}

loc_8057E270:
{
    MemoryInline::FlatWriteFloat32((r30 + 456), f1.d);
    goto loc_8057E300;
}

loc_8057E278:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8057E27C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E300;
    }
}

loc_8057E280:
{
    MemoryInline::FlatWriteFloat32((r30 + 456), f2.d);
    goto loc_8057E300;
}

loc_8057E288:
{
    r4 = MemoryInline::FlatRead32(r3);
    r0 = 0;
    r5 = MemoryInline::FlatRead32((r4 + 4));
    r4 = MemoryInline::FlatRead32((r5 + 4));
    r4 = (r4 & -268435457);
    MemoryInline::FlatWrite32((r5 + 4), r4);
    MemoryInline::FlatWrite32((r3 + 204), r0);
    r3 = r30;
    // inline leaf 0x80590874 (5 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r3 = MemoryInline::FlatRead32(r3);
    // end of inlined leaf 0x80590874
    r4 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 456));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 6656));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 104));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057E2C0:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057E2D8;
    }
}

loc_8057E2C4:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 456), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057E2D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E2D8;
    }
}

loc_8057E2D4:
{
    MemoryInline::FlatWriteFloat32((r30 + 456), f1.d);
}

loc_8057E2D8:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r30 + 456));
    f1.d = MemoryInline::FlatReadFloat32((r3 + 6656));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057E2E8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8057E300;
    }
}

loc_8057E2EC:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r30 + 456), f0.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8057E2F8:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057E300;
    }
}

loc_8057E2FC:
{
    MemoryInline::FlatWriteFloat32((r30 + 456), f1.d);
}

loc_8057E300:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + 456));
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 6740));
    r3 = (r30 + 464);
    f1.d = (-(f1.d));
    r4 = (r30 + 68);
    f1.d = PpcFmulsInline(f0.d, f1.d);
    ctx->lr = 0x8057E320u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8023A0A0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    r3 = r30;
    // inline leaf 0x805903AC (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // end of inlined leaf 0x805903AC
    r4 = (r30 + 464);
    ctx->lr = 0x8057E330u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8059FD0Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
}

loc_8057E330:
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
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[12] = r12;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8057E0DC func_8057E0DC preserves=true fpr_mask=0x00000000
