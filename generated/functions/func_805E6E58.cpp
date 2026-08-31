#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" MkwStateFreeResult2 func_806212FC_statefree(uint32_t, uint32_t, uint32_t);
extern "C" MkwStateFreeResult2 func_806212FC_statefree_v0(uint32_t, uint32_t);

extern "C" void func_805E6E58(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r29_rot_0 = 0;
    uint32_t r29_rot_1 = 0;
    uint32_t r29_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805E6E58;

loc_805E6E58:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    MemoryInline::FlatWriteRam32((r1 + 36), r29);
    r0 = MemoryInline::FlatRead32((r3 + 8));
}

loc_805E6E7C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(4))) {
        goto loc_805E71D0;
    }
}

loc_805E6E80:
{
    r3 = MemoryInline::FlatRead32((r3 + 84));
    r0 = (r3 + -5);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
}

loc_805E6E8C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805E71B0;
    }
}

loc_805E6E90:
{
}

loc_805E6E94:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_805E6EBC;
    }
}

loc_805E6E98:
{
}

loc_805E6E9C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805E6F9C;
    }
}

loc_805E6EA0:
{
}

loc_805E6EA4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(2))) {
        goto loc_805E7000;
    }
}

loc_805E6EA8:
{
}

loc_805E6EAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(3))) {
        goto loc_805E70BC;
    }
}

loc_805E6EB0:
{
}

loc_805E6EB4:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(4))) {
        goto loc_805E711C;
    }
}

loc_805E6EB8:
{
    goto loc_805E71D0;
}

loc_805E6EBC:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 1220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E6ED0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E6F6C;
    }
}

loc_805E6ED4:
{
    r0 = 0;
    MemoryInline::FlatWriteRam32((r1 + 16), r0);
    r3 = (r1 + 16);
    r4 = (r1 + 12);
    MemoryInline::FlatWriteRam32((r1 + 12), r0);
    r5 = (r1 + 8);
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    ctx->lr = 0x805E6EF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x801D0E98u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E6EF8:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_805E6F4C;
    }
}

loc_805E6EFC:
{
    r0 = MemoryInline::FlatRead32((r1 + 16));
}

loc_805E6F04:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E6F34;
    }
}

loc_805E6F08:
{
    r0 = MemoryInline::FlatRead32((r1 + 12));
}

loc_805E6F10:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E6F34;
    }
}

loc_805E6F14:
{
    r0 = MemoryInline::FlatRead32((r1 + 8));
}

loc_805E6F1C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805E6F34;
    }
}

loc_805E6F20:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r0 = 2;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 1220), r0);
    goto loc_805E6F6C;
}

loc_805E6F34:
{
    r3 = 0x809C0000u;
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 1220), r0);
    goto loc_805E6F6C;
}

loc_805E6F4C:
{
}

loc_805E6F50:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-4))) {
        goto loc_805E71D0;
    }
}

loc_805E6F54:
{
}

loc_805E6F58:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(-8))) {
        goto loc_805E71D0;
    }
}

loc_805E6F5C:
{
    r3 = MemoryInline::FlatRead32((r30 + 7736));
    r0 = 1;
    r3 = MemoryInline::FlatRead32((r3 + 152));
    MemoryInline::FlatWrite32((r3 + 1220), r0);
}

loc_805E6F6C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 152));
    r0 = MemoryInline::FlatRead32((r3 + 1220));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E6F80:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E71D0;
    }
}

loc_805E6F84:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805E6F90u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066F0CCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 1;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805E71D0;
}

loc_805E6F9C:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
}

loc_805E6FAC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805E71D0;
    }
}

loc_805E6FB0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805E6FBC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E6FE0;
    }
}

loc_805E6FC0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_805E6FCC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E6FE0;
    }
}

loc_805E6FD0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805E6FE0:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 92);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    r5 = (r31 + 10740);
    ctx->lr = 0x805E6FF4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066EB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 2;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805E71D0;
}

loc_805E7000:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
}

loc_805E7010:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805E71D0;
    }
}

loc_805E7014:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    r0 = (r3 + -1);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r29_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r29 = (r29_rot_1 & 134217727);
}

loc_805E7028:
{
    if ((static_cast<int32_t>(r29) != static_cast<int32_t>(0))) {
        goto loc_805E704C;
    }
}

loc_805E702C:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
}

loc_805E7038:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(7))) {
        goto loc_805E704C;
    }
}

loc_805E703C:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805E704C:
{
}

loc_805E7050:
{
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_805E7084;
    }
}

loc_805E7054:
{
    r0 = MemoryInline::FlatRead32((r31 + 92));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E705C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7084;
    }
}

loc_805E7060:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
    r3 = 0x809C0000u;
    r4 = (r31 + 92);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805E7078u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066EEB4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 3;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805E71D0;
}

loc_805E7084:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_805E7088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E70A0;
    }
}

loc_805E708C:
{
    r0 = MemoryInline::FlatRead8((r31 + 10740));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E7094:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E70A0;
    }
}

loc_805E7098:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 88), static_cast<uint8_t>(r0));
}

loc_805E70A0:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 496);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805E70B0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066EA80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805E71D0;
}

loc_805E70BC:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
}

loc_805E70CC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805E71D0;
    }
}

loc_805E70D0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805E70DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7100;
    }
}

loc_805E70E0:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_805E70EC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7100;
    }
}

loc_805E70F0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805E7100:
{
    r3 = 0x809C0000u;
    r4 = (r31 + 496);
    r3 = MemoryInline::FlatRead32((r3 + 8516));
    ctx->lr = 0x805E7110u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x8066EA80u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r0 = 4;
    MemoryInline::FlatWrite32((r31 + 84), r0);
    goto loc_805E71D0;
}

loc_805E711C:
{
    r30 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FA4 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 16));
    // end of inlined leaf 0x80668FA4
}

loc_805E712C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_805E71D0;
    }
}

loc_805E7130:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(1));
}

loc_805E713C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7160;
    }
}

loc_805E7140:
{
    r3 = MemoryInline::FlatRead32((r30 + 8516));
    // inline leaf 0x80668FAC (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 20));
    // end of inlined leaf 0x80668FAC
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(7));
}

loc_805E714C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7160;
    }
}

loc_805E7150:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    // inline leaf 0x806213B8 (5 guest instruction(s))
    r4 = 6;
    r0 = 1;
    MemoryInline::FlatWrite32((r3 + 12), r4);
    MemoryInline::FlatWrite8((r3 + 21), static_cast<uint8_t>(r0));
    // end of inlined leaf 0x806213B8
}

loc_805E7160:
{
    r5 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r31 + 496));
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1216), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r0 = MemoryInline::FlatRead8((r31 + 497));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1217), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r0 = MemoryInline::FlatRead8((r31 + 498));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1218), static_cast<uint8_t>(r0));
    r4 = MemoryInline::FlatRead32((r5 + 7736));
    r0 = MemoryInline::FlatRead8((r31 + 499));
    r4 = MemoryInline::FlatRead32((r4 + 152));
    MemoryInline::FlatWrite8((r4 + 1219), static_cast<uint8_t>(r0));
    ctx->lr = 0x805E71ACu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_805E71D0;
}

loc_805E71B0:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    ctx->gpr[1] = r1;
    if (MkwStateFreeAbiEnabled(0x806212FCu) && KnownTranslatedCpuCall<0x806212FCu>::kAvailable && !KnownTranslatedCpuCall<0x806212FCu>::kMustRemainDynamicallyDispatchable && IsBaseTranslatedCpuTargetActive<0x806212FCu>()) {
        const auto state_free_result_806212FC_4838 = func_806212FC_statefree_v0(r3, xer);
        r0 = static_cast<uint32_t>(state_free_result_806212FC_4838[0]);
        r3 = static_cast<uint32_t>(state_free_result_806212FC_4838[1]);
    } else {
        ctx->gpr[0] = r0;
        ctx->gpr[1] = r1;
        ctx->gpr[3] = r3;
        ctx->gpr[4] = r4;
        ctx->gpr[5] = r5;
        ctx->gpr[29] = r29;
        ctx->gpr[30] = r30;
        ctx->gpr[31] = r31;
        ctx->fpr[1] = f1;
        ctx->cr = cr;
        InvokeDirectCpu<0x806212FCu>(ctx);
        r0 = ctx->gpr[0];
        r1 = ctx->gpr[1];
        r3 = ctx->gpr[3];
        r4 = ctx->gpr[4];
        r5 = ctx->gpr[5];
        r29 = ctx->gpr[29];
        r30 = ctx->gpr[30];
        r31 = ctx->gpr[31];
        f1 = ctx->fpr[1];
        cr = ctx->cr;
        xer = ctx->xer;
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_805E71C4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E71D0;
    }
}

loc_805E71C8:
{
    r3 = r31;
    ctx->lr = 0x805E71D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x805E7220u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_805E71D0:
{
    r0 = MemoryInline::FlatRead32((r31 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_805E71D8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805E7204;
    }
}

loc_805E71DC:
{
    r3 = 0x809C0000u;
    r3 = MemoryInline::FlatRead32((r3 + 7736));
    r0 = MemoryInline::FlatRead32((r3 + 48));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_805E71EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805E7204;
    }
}

loc_805E71F0:
{
    r4 = 0x80890000u;
    r3 = r31;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 21960));
    r4 = -1;
    // inline leaf 0x80602488 (7 guest instruction(s))
}

loc_inl16_0x80602488:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(-1));
}

loc_inl16_0x8060248C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_inl16_0x80602494;
    }
}

loc_inl16_0x80602490:
{
    MemoryInline::FlatWrite32((r3 + 16), r4);
}

loc_inl16_0x80602494:
{
    r0 = 1;
    MemoryInline::FlatWriteFloat32((r3 + 24), f1.d);
    MemoryInline::FlatWrite8((r3 + 12), static_cast<uint8_t>(r0));
}

loc_inl16_cont_80602488:
{
    // end of inlined leaf 0x80602488
}

loc_805E7204:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x805E6E58 func_805E6E58 preserves=true fpr_mask=0x00000000
